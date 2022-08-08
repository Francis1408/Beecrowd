// TIME LIMIT EXCEEDED :/

#include <iostream>
#include <vector>
#include <string>

using namespace std;


int define_titan_height( char titan_type, int p_height, int m_height, int g_height){

  switch (titan_type)
  {
  case 'P':
    return p_height;
    break;
  case 'M': 
    return m_height;
    break;
  case 'G':
    return g_height;
    break;
  default:
    return 0; 
    break;
  }
}

int main(){

  int num_titans, walls_height;
  int p_height, m_height, g_height;
  int current_titan_height, condition = 1, distance;
  vector<int> walls, titans_wave_height;
  string titans_wave;

  cin >> num_titans >> walls_height;
  cin >> titans_wave;
  cin >> p_height >> m_height >> g_height;

  for (int i = 0; i < num_titans; i++)
  {
   titans_wave_height.push_back(define_titan_height(titans_wave[i],p_height, m_height, g_height));
    
  }

  walls.push_back(walls_height);

  for (int i = 0; i < num_titans; i++) {

    condition = 1;
    distance = 0;

    for(; distance < walls.size() && condition == 1; distance++){
      if( titans_wave_height[i] <= walls[distance]){
          walls[distance] = walls[distance]- titans_wave_height[i];
          condition = 0;
      }
    }
    if (condition) {
      walls.push_back(walls_height);
      walls[distance] = walls[distance] - titans_wave_height[i];
      condition = 0; 
      }
    
  }
  
  cout << walls.size() << endl;

  return 0;
}
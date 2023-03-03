#include <iostream>

using namespace std;

int main(){

  int stars;
  cin >> stars;

  int sheeps[stars];
  //int initial_sheeps[stars];
  int num_sheeps, total_sheeps = 0;


  for(int i = 0; i < stars; i++){
    cin >> num_sheeps;
    sheeps[i] = num_sheeps;
   //initial_sheeps[i] = num_sheeps;
    total_sheeps+= num_sheeps;
  }


  int current_star = 0;
  int stolen_sheeps = 0;
  int current_position = 0;
  int visited_stars = 0;

  while(current_star >= 0 && current_star < stars){

    if(sheeps[current_star]%2 == 0){
         if(sheeps[current_star]!= 0){
            stolen_sheeps++;
            sheeps[current_star]--;
        }
        if(current_position == 0)
           visited_stars++;
        current_position--;
        current_star--;
    }else{
        if(sheeps[current_star]!= 0){
            stolen_sheeps++;
            sheeps[current_star]--;
        }
        if(current_position == 0)
          visited_stars++;
        else
          current_position++;
        current_star++;
    }

  }
 /*
  int visited_stars = 0;

  for(int i=0; i < stars; i++){
    if(sheeps[i] != initial_sheeps[i])
        visited_stars++;
  }
  */
  cout << visited_stars << " " <<total_sheeps - stolen_sheeps << endl;
 

  return 0;

}
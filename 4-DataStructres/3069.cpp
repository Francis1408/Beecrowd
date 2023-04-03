#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    vector <pair <int, int> > intervals;

    int num_sellers;
    int beach_length;
    int begin, end;
    int counter;
    int times = 1;

    cin >> beach_length >> num_sellers;

    while(beach_length || num_sellers) {

        for(int i = 0; i < num_sellers; i++){
            
         cin >> begin >> end;

         intervals.push_back(make_pair(begin, end));

        }
    
        cout << "Teste " << times << endl;

        sort(intervals.begin(), intervals.end());

        begin = intervals[0].first;
        end = intervals[0].second;


        for(counter = 1; counter < num_sellers; counter++) {
           while(counter < num_sellers && intervals[counter].first <= end){

                if(intervals[counter].second > end) {
                   end = intervals[counter].second;
                }
                counter++;
           }
            cout << begin << " " << end << endl;
            begin = intervals[counter].first;
            end = intervals[counter].second;
        }  

        if(counter == num_sellers){
            cout << begin << " " << end << endl;
        }
        cout << endl;
        cin >> beach_length >> num_sellers;
        times++;
        intervals.clear();   

    }
    
    return 0;
}
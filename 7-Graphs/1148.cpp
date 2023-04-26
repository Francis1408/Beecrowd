#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

int cities;
int paths;
int X, Y, H, K, O, D;



int main() {


    while(true) {

        cin >> cities >> paths;

        if(!cities && !paths) break;

        vector <vector<int>> graph(cities, vector<int>(cities, INF));
        priority_queue <pair<int, int>> pq;
        vector<int> dist(cities, INF);
        // vector<int>previous(cities, NULL);

        

        for(int i = 0; i < paths; i++) {

            scanf("%d %d %d", &X, &Y, &H); X--, Y--;
            // cin >> X >> Y >> H;
            if(graph[Y][X] != INF) {
                graph[Y][X] = 0;
                graph[X][Y] = 0;
            }else{
                graph[X][Y] = H;
            }
        }

        cin >> K;
        
        for(int j = 0; j < K; j++) {

            scanf("%d %d", &O, &D);
            //cin >> O >> D;
            pq.push(make_pair(0,O-1));
            dist[O-1] = 0;

             while(pq.size() > 0) {

                int distance = -pq.top().first;
                int city = pq.top().second;

                //cout <<"CIDADE ATUAL: " << endl << city <<" "<< distance << endl << endl;

                pq.pop();

                if(distance != dist[city]) continue;

                for(int i = 0; i < cities; i++) {

                    if(i == city) continue;

                    int u = i;
                    int cost = graph[city][u];

                  
                    //cout << "VIZINHO " << endl << u << endl << endl;
                    //cout << "DISTANCIA ATUAL: " << dist[u] << endl << "Distancia possivel: " << dist[city] << " + " << cost << endl; 

                    if(dist[u] > (dist[city] + cost)) {
                        //cout << "Relaxa aresta - Distancia antiga: " << dist[u] << endl;
                        dist[u] = dist[city] + cost;
                        //cout << "Distancia atual: " << dist[u] << endl;
                        pq.push(make_pair(-dist[u], u));
                    }
                }
            }

        /*
            for(int i = 0; i < cities; i++) {
                for(int j = 0; j < cities; j++ ) {

                    cout << graph[i][j] << " ";
                }
                cout << endl;
            }
        */

            if(dist[D-1] == INF) cout << "Nao e possivel entregar a carta" << endl;
            else cout << dist[D-1] << endl;

            dist.assign(cities, INF);
            
        }

        cout << endl;

    }


    return 0;
}
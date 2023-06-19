#include <bits/stdc++.h>
#define MAX 1007

using namespace std;

int n, p, k, answer;
int nivel[MAX];

bool visited[MAX];
map< pair<int, int>, bool> used;
stack<int> discard;
vector< vector<int> > graph(MAX);


int DFS(int s) {
	visited[s] = true;

	int r = 1;

	for(auto nbr : graph[s]) {
		if(!visited[nbr] && nivel[nbr] > 0) r += DFS(nbr);
	}

	
	return r;
}


void addEdge(int i, int j) {
	graph[j].push_back(i);
	graph[i].push_back(j);

	nivel[i]++;
	nivel[j]++;
}


void solve() {
	answer = 0;
	used.clear();
	stack<int> discard;
	memset(nivel, 0, sizeof(nivel));

	graph = vector< vector<int> >(MAX);

	for(int i = 0; i < p; i++) {
		int u, v; cin >> u >> v;
		u--, v--;

		if(used[pair<int, int>(min(u, v), max(u, v))]) continue;

		used[pair<int, int>(min(u, v), max(u, v))] = true;

		addEdge(u, v);
	}

	for(int i = 0; i < n; i++) {
		if(nivel[i] < k) {
			discard.push(i);
			nivel[i] = 0; 
		}
	}


	while(!discard.empty()) { 
		int t = discard.top();
		discard.pop();

		for(auto nbr : graph[t]) {
			if(nivel[nbr] > 0) {
				nivel[nbr]--;

				if(nivel[nbr] < k) {
					discard.push(nbr);
					nivel[nbr] = 0;
				}
			}
		}
	}

	memset(visited, 0, sizeof(visited));

	for(int i = 0; i < n; i++) {
		if(!visited[i] && nivel[i] > 0)
			answer = max(answer, DFS(i));
	}

	cout << answer << endl;
}


int main(){

    cin >> n >> p >> k;

	while(n) {
		solve();
		cin >> n >> p >> k;
	}

	
	return 0;
}
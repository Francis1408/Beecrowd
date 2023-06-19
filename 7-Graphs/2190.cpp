#include <bits/stdc++.h>

#define pb push_back
#define endl '\n'
#define ff first
#define ss second
#define int long long int

using namespace std;

const int MAX = 1e3;
const int MOD = 1e9 + 7;


int n, m;
vector< pair<int, pair<int, int> > > edges;
vector<int> id(MAX), sz(MAX, 1);


void addEdge(int u, int v, int w) {
	edges.pb({w, {u, v}});
}


int find(int p) {
	return id[p] = (id[p] == p ? p : find(id[p]));
}


void setUnion(int p, int q) {
	p = find(p), q = find(q);

	if(p == q) return;

	if(sz[p] > sz[q]) swap(p, q);

	id[p] = q; sz[q] += sz[p];
}


void kruskal() {
	sort(edges.begin(), edges.end());

	int cost = 0;

	for(auto edge : edges) {
		int wt = edge.first;
		int a = edge.ss.ff;
		int b = edge.ss.ss;

		if(find(a) != find(b)) {
			setUnion(a, b);
			cost += wt;

			if(b < a) swap(b, a);

			cout << a << " " << b << endl;
		}
	}
}


void solve() {
	iota(id.begin(), id.end(), 0);

	for(int i = 0; i < m; i++) {
		int v, w, p; cin >> v >> w >> p;

		addEdge(v, w, p);
	}

	kruskal();
}


int32_t main() {
	int i = 1;
	cin >> n >> m;

	while(n) {
		if(!n) break;
		cout << "Teste " << i++ << endl;
		solve();
		cout << endl;
		edges.clear();

		for(int i = 0; i < MAX; i++) 
            sz[i] = 1;
            
        cin >> n >> m;
	}


	return 0;
}
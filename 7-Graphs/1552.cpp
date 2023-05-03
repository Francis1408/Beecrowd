#include <bits/stdc++.h>

#define int long long int
#define double long double

using namespace std;

const int MAX = 507;


struct Point {
    int x, y;

    Point() {
        x = y = 0;
    }

    Point(int newX, int newY) {
        x = newX; y = newY;
    }

    void print() {
        cout << "(" << x << ", " << y << ")";
    }
};

struct Edge {
    int u, v;
    double w;


    Edge() {
        u = 0;
        v = 0;
        w = 0;
    }


    Edge(int newU, int newX, double newW) {
        u = newU;
        v = newX;
        w = newW;
    }
};


int c, n, xi, yi, k;
vector<int> id(MAX), sz(MAX);
vector< pair<double, double> > points;

int compara(Edge e1, Edge e2) {
    return (e1.w < e2.w);
}


double distPontos(pair<int, int> p2, pair<int, int> p1) {
    return sqrt(pow(p1.second - p2.second, 2) + pow(p1.first - p2.first, 2));
}


int find(int p) {
    return id[p] = (id[p] == p ? p : find(id[p]));
}


void setUnion(int p, int q) {
    p = find(p), q = find(q);

    if(p == q) return;

    if(sz[p] > sz[q]) swap(p, q);
    id[p] = q, sz[q] += sz[p];
}


double kruskal(vector< pair<double, pair<int, int > > > edges) {
    sort(edges.begin(), edges.end());

    double cost = 0;

    for(auto edge : edges) {
        double wt = edge.first;
        int a = edge.second.first;
        int b = edge.second.second;

        if(find(b) != find(a)) {
            setUnion(a, b);
            cost += wt;
        }
    }

    return cost;
}


void solve() {
    
}


int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
    cin >> c;
    while(c--) {
    	cin >> n;
	vector< pair<double, pair<int, int> > > edges;
	id = vector<int>(n + 2);
	sz = vector<int>(n + 2, 1);
	iota(id.begin(), id.end(), 0);

	for(int i = 0; i < n; i++) {
		cin >> xi >> yi;
		points.push_back({xi, yi}); 
	}

	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
		    edges.push_back({(distPontos(points[i], points[j]) / 100.0), {i, j}});
		}
	}

	cout << fixed << setprecision(2) << kruskal(edges) << endl;

	points.clear();
    }

    return 0;
}
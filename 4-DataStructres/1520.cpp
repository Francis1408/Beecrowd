#include <bits/stdc++.h>

using namespace std;

int N, s;

vector<int> v;

int main() {
	while(cin >> N) {
		for(int i = 0; i < N; i++) {
			int x, y; cin >> x >> y;
		
			for(int i = x; i <= y; i++) v.push_back(i);
		}
		sort(v.begin(), v.end());

		cin >> s;
		
		int start = lower_bound(v.begin(), v.end(), s) - v.begin(); // primeiro que não é menor que s
		int end = upper_bound(v.begin(), v.end(), s) - v.begin() - 1; // Primeiro elemento que é maior que s
		
		if(v[start] != s || v[end] != s) cout << s << " not found" << endl;
		else cout << s << " found from " << start << " to " << end << endl;

		v.clear();
	}

	return 0;
}
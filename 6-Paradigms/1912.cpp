#include <bits/stdc++.h>

#define int long long int

using namespace std;

int N, A;

vector<int> papel;


int32_t main() {
	while(true) {
		cin >> N >> A;

		if(!N && !A) break;

		vector<int> papel(N);
		bool achou = false;
		double r = 0, l = 0;
		for(int i = 0; i < N; i++) {
			cin >> papel[i];
			if(papel[i] > r) r = papel[i];
		}
		
		for(int i = 0; i < 200; i++) {
			double m = (l + r) / 2;
			
			double sum = 0;

			for(int i = 0; i < N; i++) if(papel[i] >= m) sum += papel[i] - m;
			if(sum - A >= 0 && sum - A < 0.00001) { // 4 casas
				if(m <= 0.0000) cout << ":D\n";
				else cout << fixed << setprecision(4) << m << endl;
				achou = true;
				break;
			}
			else if(sum > A) l = m + 1;
			else r = m - 1;
		}
		if(!achou) cout << "-.-" << endl;
		papel.clear();
	}

	return 0;
}
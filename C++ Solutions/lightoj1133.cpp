#include <bits/stdc++.h>
#define read() freopen("input", "r", stdin)
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, n, m; i <= T; i++){
		cin >> n >> m;

		vector<int> v(n);
		for(int j = 0; j < n; j++)
			cin >> v[j];

		char c;
		int a;
		for(int j = 0; j < m; j++){
			cin >> c;

			if(c == 'S'){
				cin >> a;
				for(int j = 0; j < n; j++)
					v[j] += a;
			}
			else if(c == 'M'){
				cin >> a;
				for(int j = 0; j < n; j++)
					v[j] *= a;
			}
			else if(c == 'D'){
				cin >> a;
				for(int j = 0; j < n; j++)
					v[j] /= a;
			}
			else if(c == 'R')
				reverse(v.begin(), v.end());
			else if(c == 'P'){
				int x, y;
				cin >> x >> y;
				swap(v[x], v[y]);
			}
		}

		cout << "Case " << i << ":" << endl;
		for(int j = 0; j < n; j++){
			cout << v[j];
			if(j < n - 1)
				cout << " ";
		}
		cout << endl;
	}

	return 0;
}

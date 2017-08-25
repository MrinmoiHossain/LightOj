#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, n, p, q; i <= T; i++){
		cin >> n >> p >> q;

		vector<int> v(n);
		for(int j = 0; j < n; j++)
			cin >> v[j];
		sort(v.begin(), v.end());

		int ans = 0, t = 0;
		for(int j = 0; j < p && j < n; j++){
			t += v[j];
			if(t > q) break;
			ans++;
		}
		cout << "Case " << i << ": " << ans << endl;
	}

	return 0;
}

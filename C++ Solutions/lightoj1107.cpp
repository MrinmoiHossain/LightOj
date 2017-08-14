#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, a, b, c, d; i <= T; i++){
		cin >> a >> b >> c >> d;
		int n;
		cin >> n;

		cout << "Case " << i << ":" << endl;
		for(int j = 0, x, y; j < n; j++){
			cin >> x >> y;

			if((a <= x && x <= c) && (b <= y && y <= d))
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}

	return 0;
}

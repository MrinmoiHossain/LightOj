#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, n; i <= T; i++){
		cin >> n;

		string s, mxs, mns;
		int a, b, c, cube, mx = 0, mn = 1000000;
		bool bl = 0;
		for(int j = 0; j < n; j++){
			cin >> s >> a >> b >> c;
			cube = a * b * c;

			if(cube > mx){
				mx = cube;
				mxs = s;
			}
			if(mn > cube){
				mn = cube;
				mns = s;
			}
		}
		cout << "Case " << i << ": ";
		if(mx == mn)
			cout << "no thief" << endl;
		else
			cout << mxs << " took chocolate from " << mns << endl;
	}

	return 0;
}

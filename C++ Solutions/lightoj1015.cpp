#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, n; i <= T; i++){
		cin >> n;
		int sum = 0;
		for(int j = 0, a; j < n; j++){
			cin >> a;
			if(a > 0)
				sum += a;
		}
		cout << "Case " << i << ": " << sum << endl;
	}

	return 0;
}

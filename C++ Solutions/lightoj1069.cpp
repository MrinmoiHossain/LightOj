#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, a, b; i <= T; i++){
		cin >> a >> b;

		cout << "Case " << i << ": " << fabs(a - b) * 4 + a * 4 + 19 << endl;
	}

	return 0;
}

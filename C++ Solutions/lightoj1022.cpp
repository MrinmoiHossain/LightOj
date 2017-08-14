#include <bits/stdc++.h>
#define pi (2 * acos(0.0))
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	double r;
	for(int i = 1; i <= T; i++){
		cin >> r;

		cout << fixed << setprecision(2) << "Case " << i << ": " << (4 - pi) * r * r << endl;
	}

	return 0;
}

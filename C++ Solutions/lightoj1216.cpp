#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1; i <= T; i++){
		int r1, r2, h, p;
		cin >> r1 >> r2 >> h >> p;
		double x = (h * r2 * 1.0) / (r1 - r2);
		double r = r2 * (p / x + 1);

		double ans = (pi * (r * r * p + (r * r - r2 * r2) * x)) / 3.0;

		printf("Case %d: %lf\n", i, ans);
	}

	return 0;
}

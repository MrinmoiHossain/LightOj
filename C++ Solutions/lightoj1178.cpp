#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	
	for(int i = 1; i <= T; i++){
		double a, b, c, d;
		cin >> a >> b >> c >> d;
		double s = (d + b + fabs(a - c)) / 2;
		double area = sqrt(s * (s - d) * (s - b) * (s - fabs(a - c)));
		double h = (2 * area) / (fabs(a - c));
		double ans = min(a, c) * h + area;

		printf("Case %d: %lf\n", i, ans);
	}

	return 0;
}

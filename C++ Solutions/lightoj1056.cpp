#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	char ch;
	for(int i = 1, a, b; i <= T; i++){
		cin >> a >> ch >> b;

		double r = sqrt(a * a + b * b) / 2;
		double theta = acos(1 - (b * b / (2 * r * r)));
		double s = r * theta;
		double k = 400.0 / (a + a + s + s);

		printf("Case %d: %lf %lf\n", i, k * a, k * b);
	}

	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1; i <= T; i++){
		double v1, v2, v3, a1, a2;
		cin >> v1 >> v2 >> v3 >> a1 >> a2;

		double t1 = v1 / a1;
		double t2 = v2 / a2;
		double t = max(t1, t2);
		double d = ((v1 * v1) / (2 * a1)) + ((v2 * v2) / (2 * a2));
		double c = t * v3;

		printf("Case %d: %lf %lf\n", i, d, c);
	}

	return 0;
}

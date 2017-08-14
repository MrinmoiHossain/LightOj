#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1; i <= T; i++){
		int a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;
		double r = sqrt(pow(a - c, 2) + pow(b - d, 2));
		double ab = sqrt(pow(c - e, 2) + pow(d - f, 2));
		double theta = acos(1 - ((ab * ab) / (2 * r * r)));

		cout << fixed << setprecision(7) << "Case " << i << ": " << r * theta << endl;
	}

	return 0;
}

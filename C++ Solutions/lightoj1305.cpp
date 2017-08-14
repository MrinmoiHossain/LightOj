#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	
	for(int i = 1; i <= T; i++){
		int a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;
		int m = (a + e), n = (b + f);
		int x = (m - c), y = (n - d);
		//area = |a * b|
		int px = a - c, py = b - d;
		int qx = c - e, qy = d - f;
		int area = fabs(px * qy - qx * py);

		cout << "Case " << i << ": " << x << " " << y << " " << area << endl;
	}

	return 0;
}

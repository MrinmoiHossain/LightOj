#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1; i <= T; i++){
		double r1, r2, r3;
		cin >> r1 >> r2 >> r3;

		double a, b, c, s, A, B, C, triangle;
		a = r1 + r2;
		b = r1 + r3;
		c = r2 + r3;

		A = acos((b * b + c * c - a * a) / (2 * b * c));
		B = acos((a * a + c * c - b * b) / (2 * a * c));
		C = acos((b * b + a * a - c * c) / (2 * b * a));

		s = (a + b + c) / 2;
		triangle = sqrt(s * (s - a) * (s - b) * (s - c));

		double p, q, r;
		p = 0.5 * r1 * r1 * C;	// area = 0.5 * a * b * SinC
		q = 0.5 * r2 * r2 * B;
		r = 0.5 * r3 * r3 * A;
		triangle -= (p + q + r);

		cout << fixed << setprecision(7) << "Case " << i << ": " << triangle << endl;
	}

	return 0;
}

#include <bits/stdc++.h>
#define pi 2 * acos(0.0)
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, n; i <= T; i++){
		double r, s;
		cin >> r >> n;
		
		double radius = sin(pi / n);
		s = (r * radius) / (radius + 1);	//Sin$ = r / R - r

		printf("Case %d: %lf\n", i, s);
	}
	
	return 0;
}

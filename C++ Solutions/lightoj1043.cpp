#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1; i <= T; i++){
		double a, b, c, r;		
		cin >> a >> c >> b >> r;
		
		//ADE/ABC = pow(DE, 2)/pow(BC, 2)
		double ad = sqrt(r / (r + 1)) * a;
		printf("Case %d: %lf\n", i, ad);
	}

	return 0;
}

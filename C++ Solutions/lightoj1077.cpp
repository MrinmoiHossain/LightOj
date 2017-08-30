#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1; i <= T; i++){
		ll  a, b, c, d;
		cin >> a >> b >> c >> d;
		ll x = abs(a - c);
		ll y = abs(b - d);

		cout << "Case " << i << ": " << 1 + __gcd(x, y) << endl;
	}

	return 0;
}

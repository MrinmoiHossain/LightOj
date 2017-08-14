#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1; i <= T; i++){
		ll a, b, c;
		cin >> a >> b >> c;

		cout << "Case " << i << ": ";
		if((a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	return 0;
}

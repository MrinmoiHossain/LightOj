#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int digit(ll n)
{
	if(n % 3 == 0 || n % 3 == 1)
		return (n / 3) * 2;
	else
		return (n / 3) * 2 + 1;
}

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, a, b; i <= T; i++){
		cin >> a >> b;

		cout << "Case " << i << ": " << digit(b) - digit(a - 1) << endl;
	}

	return 0;
}

#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	
	for(int i = 1; i <= T; i++){
		ll n, m;
		cin >> n;

		cout << "Case " << i << ": ";
		if(n % 2)
			cout << "Impossible" << endl;
		else{
			for(m = 2; (n / m) % 2 == 0; m *= 2);

			cout << n / m << " " << m << endl;
		}
	}

	return 0;
}

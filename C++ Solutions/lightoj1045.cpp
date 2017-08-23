#include <bits/stdc++.h>
#define MAX 1000000
typedef long long int ll;
using namespace std;

double arr[MAX + 3];
void digit()
{
	arr[0] = 0;
	for(int i = 1; i <= MAX; i++)
		arr[i] = log10(i) + arr[i - 1];
}

int main(void)
{
	digit();
	int T;
	cin >> T;

	for(int i = 1, n, b; i <= T; i++){
		cin >> n >> b;

		ll ans = arr[n] / log10(b) + 1;

		cout << "Case " << i << ": " << ans << endl;
	}

	return 0;
}

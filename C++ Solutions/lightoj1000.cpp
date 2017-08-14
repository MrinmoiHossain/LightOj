#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, a, b; i <= T; i++){
		cin >> a >> b;

		cout << "Case " << i << ": " << a + b << endl;
	}

	return 0;
}

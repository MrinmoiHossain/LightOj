#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, a, b; i <= T; i++){
		cin >> a >> b;

		int s = b, con = 1;
		s %= a;
		while(s){
			s = s * 10 + b;
			s %= a;
			con++;
		}

		printf("Case %d: %d\n", i , con);
	}

	return 0;
}

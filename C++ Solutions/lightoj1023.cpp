#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, n, k; i <= T; i++){
		cin >> n >> k;

		string s = "";
		for(int j = 0; j < n; j++)
			s += ('A' + j);

		int con = 0;
		cout << "Case " << i << ":" << endl;
		do{
			cout << s << endl;
			con++;
		}while(next_permutation(s.begin(), s.end()) && con < k);
	}

	return 0;
}

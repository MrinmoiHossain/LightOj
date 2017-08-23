#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, n; i <= T; i++){
		cin >> n;
		cin.ignore();

		cout << "Case " << i << ":" << endl;
		int sum = 0;
		string s;
		for(int j = 0, a; j < n; j++){
			cin >> s;

			if(s == "donate"){
				cin >> a;
				sum += a;
			}
			else if(s == "report")
				cout << sum << endl;
		}
	}

	return 0;
}

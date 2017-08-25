#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, n; i <= T; i++){
		cin >> n;

		vector<int> v(n + 1);
		v[0] = 2;	//initial noise size is 2
		int con = 0;
		for(int j = 1, b; j < n + 1; j++){
			cin >> v[j];

			if(v[j] > v[j - 1])
				con += ceil((v[j] - v[j - 1]) / 5.0);
		}

		cout << "Case " << i << ": " << con << endl;
	}

	return 0;
}

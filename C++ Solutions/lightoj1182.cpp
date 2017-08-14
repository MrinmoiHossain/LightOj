#include <bits/stdc++.h>
using namespace std;

int bin(int n);

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, n; i <= T; i++){
		cin >> n;

		cout << "Case " << i << ": ";
		if(bin(n) & 1)
			cout << "odd" << endl;
		else
			cout << "even" << endl;
	}

	return 0;
}

int bin(int n)
{
	string s = "";
	while(n){
		s += (n % 2) + '0';
		n /= 2;
	}

	int con = 0;
	for(int i = 0; i < s.length(); i++)
		if(s[i] == '1')
			con++;

	return con;
}

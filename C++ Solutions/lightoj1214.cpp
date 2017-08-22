#include <bits/stdc++.h>
typedef long long int ll;
#define read() freopen("input", "r", stdin)
using namespace std;

bool isDivision(string s, ll n)
{
	ll a = 0;
	if(n < 0)
		n *= -1;
	int i = 0;
	if(s[i] == '-')
		i++;
	for(; i < s.length(); i++){
		a = ((s[i] - '0') + a * 10) % n;
	}
	a %= n;
	
	return (a == 0? 1:0);
}

int main(void)
{
	int T;
	cin >> T;
	cin.ignore();

	string s;
	ll n;
	for(int i = 1; i <= T; i++){
		cin >> s >> n;

		cout << "Case " << i << ": " << (isDivision(s, n)? "divisible" : "not divisible") << endl;
	}

	return 0;
}

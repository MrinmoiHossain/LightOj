#include <bits/stdc++.h>
#define read() freopen("in", "r", stdin)
using namespace std;

int conv(string s)
{
	int n = 0, len = s.length();
	for(int i = 0; i < len; i++)
		n += (s[i] - '0') * pow(2, len - i - 1);

	return n;
}

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1; i <= T; i++){
		vector<int> v(4);
		char ch;
		cin >> v[0] >> ch >> v[1] >> ch >> v[2] >> ch >> v[3];

		string s;
		cin >> s;
		for(int j = 0; j < s.length(); j++)
			if(!isdigit(s[j]))
				s[j] = ' ';
		
		stringstream ss(s);
		string a;
		vector<int> b;
		while(ss >> a)
			b.push_back(conv(a));

		bool bl = 1;
		for(int j = 0; j < 4; j++){
			if(v[j] != b[j]){
				bl = 0;
				break;
			}
		}
		cout << "Case " << i  << ": " << (bl == 1? "Yes" : "No") << endl;
		b.clear();
	}

	return 0;
}

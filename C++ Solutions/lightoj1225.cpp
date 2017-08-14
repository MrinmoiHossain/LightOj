#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	cin.ignore();

	char s[51];
	for(int i = 1; i <= T; i++){
		scanf("%s", s);
		int len = strlen(s);
		bool b = 1;

		for(int j = 0; j <= len; j++)
			if(s[j] != s[len - 1 - j])
				b = 0;

		printf("Case %d: ", i);
		if(b)
			printf("Yes\n");
		else
			printf("No\n");
	}

	return 0;
}

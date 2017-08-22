#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll dp[10003];
int a, b, c, d, e, f;

int fn(int n)
{
    dp[0] = a;
    dp[1] = b;
    dp[2] = c;
    dp[3] = d;
    dp[4] = e;
    dp[5] = f;

	for(int i = 6; i <= 10000; i++)
		dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4] + dp[i - 5] + dp[i - 6]) % 10000007;

    return dp[n];
}

int main()
{
    int n, caseno = 0, cases;
    scanf("%d", &cases);

    while(cases--){
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }

    return 0;
}

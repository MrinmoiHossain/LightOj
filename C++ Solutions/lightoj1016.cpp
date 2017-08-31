#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	scanf("%d", &T);

	for(int i = 1, n , w; i <= T; i++){
		scanf("%d %d", &n, &w);

		vector<long int> v(n);
		long int x;
		for(int j = 0; j < n; j++)
			scanf("%ld %ld", &x, &v[j]);

		sort(v.begin(), v.end());

		long int move = 1, f = v[0] + w;
		for(int j = 1; j < n; j++)
			if(v[j] > f){
				move++;
				f = v[j] + w;
			}

		printf("Case %d: %ld\n", i, move);
	}

	return 0;
}

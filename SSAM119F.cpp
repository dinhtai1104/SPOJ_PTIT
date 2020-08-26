#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n + 2][m + 2], dp[n + 2][m + 2];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			scanf("%d", &a[i][j]);
			dp[i][j] = a[i][j];
		}
	}
	a[1][0] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (i == 1) a[i][j] += a[i][j - 1];
			else if (j == 1) a[i][j] += a[i - 1][j];
			else a[i][j] += min(a[i - 1][j - 1], min(a[i - 1][j], a[i][j - 1]));
		}
	}
	printf("%d\n", a[n][m]);
}
int main()
{
	int q;
	scanf("%d", &q);
	while(q--)
	{
		solve();
	}
	return 0;
}
 
 

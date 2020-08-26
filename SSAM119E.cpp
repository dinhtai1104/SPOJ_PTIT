#include<bits/stdc++.h>
using namespace std;
typedef long long lol;
lol f[111][111];
const lol mod = 1e9+7;
void Tohop()
{
	f[0][0] = 1;
	f[1][0] = 1;
	f[1][1] = 1;
	for (int i = 2; i <= 110; i++)
	{
		f[i][0] = 1;
		for (int j = 1; j <= i; j++)
		{
			f[i][j] = (f[i - 1][j]%mod + f[i - 1][j - 1]%mod)%mod;
		}
	}
//	for (int i = 1; i <= 20; i++)
//	{
//		for (int j = 1; j <= 20; j++)
//			cout << f[i][j] << ' ';
//		cout << endl;
//	}
}
int main()
{
	Tohop();
	int q;
	scanf("%d", &q);
	while(q--)
	{
		int n;
		scanf("%d", &n);
		printf("%lld\n", f[n + 9][n]);
	}
	return 0;
}
 
 

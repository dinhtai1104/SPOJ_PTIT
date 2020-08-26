#include<bits/stdc++.h>
using namespace std;
typedef long long lol;
lol f[210][210];
const lol mod = 1e9+7;
void Tohop()
{
	f[0][0] = 1;
	f[1][0] = 1;
	f[1][1] = 1;
	for (int i = 2; i <= 205; i++)
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
lol C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    if (f[k][n]) return f[k][n];
    f[k][n] =  C(k - 1, n - 1) + C(k, n - 1);
}
int main()
{
	Tohop();
	int test;
	scanf("%d", &test);
	while(test--)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		printf("%ld\n", f[m + n][n]%mod);
	}
	return 0;
}
 
 

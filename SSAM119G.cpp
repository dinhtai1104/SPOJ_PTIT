#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n, s;
	scanf("%d%d", &n, &s);
	int a[n], f[s + 1] = {0};
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	f[0] = 1, f[s] = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = s; j >= a[i]; j--)
		{
			if (f[j] == 0 && f[j - a[i]]) f[j] = 1;
		}
	}
	if (f[s]) printf("YES\n");
	else printf("NO\n");
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
 
 

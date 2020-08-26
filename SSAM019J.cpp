#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	printf("%d ", a[0]);
	for (int i = 1; i < n; i++) printf("%d ", a[i] * a[i - 1]/__gcd(a[i], a[i - 1])); 
	printf("%d\n", a[n - 1]);
}
int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		solve();
	}
	return 0;
}
 
 

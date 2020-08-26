#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	long n, m;
	cin >> n >> m;
	long a[n + 5]; for (int i = 1; i <= n; i++) cin >> a[i];
	long *C = new long[n + 5];
	for (int i = 1; i <= m; i++) C[i] = m + 1;
	C[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = a[i]; j <= m; j++)
		{
			C[j] = min(C[j], 1 + C[j - a[i]]);
		}
	}
	if (C[m] == m + 1) cout << -1;
	else cout << C[m];
	return 0;
}
 
 

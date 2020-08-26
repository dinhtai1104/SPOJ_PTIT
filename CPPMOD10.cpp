#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9 + 7;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n, k, x, res = 0;
		cin >> n >> k;
		x = k;
		ll a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		res = a[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{
			res += a[i] * x;
			x *= k;
			x %= mod;
			res %= mod;
		}
		cout << res << endl;
	}
	return 0;
}
 
 

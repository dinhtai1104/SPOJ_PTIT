#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n, res = -99999;
		cin >> n;
		vector<ll> a;
		a.resize(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++)
		{
			ll s = 1;
			for (int j = i; j < n; j++)
			{
				s *= a[j];
				res = max(res, s);
			}
		}
		cout << res + 1  - 1<< endl;
	}
	return 0;
}
 
 

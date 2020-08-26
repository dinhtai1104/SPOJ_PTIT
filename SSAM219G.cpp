#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Solve()
{
	ll n; 
	cin >> n; ll a[n], res = 0;
	for (ll i = 0; i < n; i++) cin >> a[i];
	for (ll i = 0; i < n; i++)
	{
		ll d = 1;
		for (ll j = i - 1; j >= 0; j--)
		{
			if (a[j] < a[i]) break;
			else 
			{
				d++;
			}
		}
		for (ll j = i + 1; j < n; j++)
		{
			if (a[j] < a[i]) break;
			else 
			{
				d++;
			}
		}
		res = max(res, a[i]*d);
	}
	cout << res << '\n';
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int test;
	cin >> test;
	while(test--)
	{
		Solve();
	}
	return 0;
}
 
 

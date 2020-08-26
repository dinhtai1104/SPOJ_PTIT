#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MAX = 1e6 + 7;
vector<ll> a(MAX, 1);
void sang()
{
	a[0] = a[1] = 0;
	for (ll i = 2; i <= sqrt(MAX); i++)
	{
		for (ll j = i * i; j < MAX; j += i)
		{
			a[j] = 0;
		}
	}
	for (int i = 1; i < MAX; i++)
		a[i] += a[i - 1];
}
int main()
{
	int t;
	cin >> t;
	sang();
	while(t--)
	{
		ll n; cin >> n;
		cout << a[sqrt(n)] << endl;
	}
	return 0;
}
 
 

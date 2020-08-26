#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD(ll a, ll b, ll c)
{
	if (b == 0) return 1;
	if ( b == 1) return a % c;
	ll x = MOD(a, b/2, c) % c;
	x = (x * x) % c;
	if (b % 2 == 0) 
	{
		return x % c;
	}
	return a * x % c;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll a, b, c;
		cin >> a >> b >> c;
		cout << MOD(a, b, c) << endl;
	}
	return 0;
}
 
 

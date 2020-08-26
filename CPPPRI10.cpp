#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tong(ll a)
{
	ll s = 0;
	while(a)
	{
		s += a % 10;
		a /= 10;
	}
	return s;
}
bool check(ll a)
{
	if (a < 2) return false;
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0) return false;
	}
	return true;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll a; cin >> a;
		if (!check(a))
		{
			ll s = a, tmp = 0;
			for (int i = 2; i <= sqrt(a); i++)
			{
				while(a % i == 0)
				{
					tmp += tong(i);
				//	cout << i << " ";
					a /= i;
				}
			}
			if (a != 1) tmp += tong(a);
			if (tmp == tong(s)) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
 
 

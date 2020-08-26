#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll b, p, res = 0;
		cin >> b >> p;
		for (ll i = 1; i < p; i++)
		{
			if ((i * i) % p == 1)
			{
				ll tmp = i + p * (b/p);
				if (tmp > b) tmp -= p;
				res += ((tmp - i)/p + 1);
			}
		}
		cout << res << endl;
	}
	return 0;
}
 
/*
 
	(a * a) % c = ((a % c) * (a % c)) % c == 1;
	x^2 - 1 mod p == 0
	p * i ???
	i = 1
	p moi;
	x^2 - 1 = p giai x?
	49 = 1(mod 2)
	49 = 1(mod 4)
	49 = 1(mod 8)
	49 = 9(mod 10)
	
	tmp = x(dang xet)
	(x + p) * b/p;
 
*/ 

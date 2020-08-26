#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 2e30;
int UOC(int x)
{
	int res = 0;
	for (int i = 1; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			if (i != x/i) res += 2;
			else res++;
		}	
	}	
	return res;
}
int main()
{
 
		int a, b, c;
		ll res = 0;
		cin >> a >> b >> c;
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
			{
				for (int k = 1; k <= c; k++)
				{
					int t = i * j * k;
			        int d = 1;
			        int it = 2;
			        while (it * it <= t) 
					{
			        	int p = 0;
			        	while (t % it == 0) 
						{
			        		++p;
			            	t /= it;
			          	}
			          	d *= p + 1;
			         	++it;
			        }
			        if (t > 1) d <<= 1;
			        res += d;
				}
			}
		}
		cout << res % mod;
	return 0;
}
 
 

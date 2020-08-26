#include<bits/stdc++.h>
using namespace std;
long long pow(int x)
{
	long long s = 1;
	for (int i = 1; i <= x; i++) s *= 2;
	return s;
}
void solve(int n, long long k)
{
	long long x = pow(n - 1);
	while(1)
	{
		if (x == k) 
		{
			cout << n << endl;
			return;
		}
		else
		{
			if (k > x)
			{
				long long tmp = k - x;
				k = x - tmp;
				n--;	
			}
			else
			{
				if (k < x)
				{
					n--;	
				}	
			}	
		}
		x /= 2;
	}
}
int main()
{
	int q;
	scanf("%d", &q);
	while(q--)
	{
		int n;
		long long k;
		scanf("%d%lld", &n, &k);
		solve(n, k);
	}
	return 0;
}
 
 

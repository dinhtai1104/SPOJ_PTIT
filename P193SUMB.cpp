#include<bits/stdc++.h>
using namespace std;
bool sol(long long n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			long long j = n/i;
			if (i == j) 
			{
				if (n % (i * i) == 0) return false;
			}
			else
			{
				if (n % (j * j) == 0 || n % (i * i) == 0) return false;
			}
		}
	}
	return true;
}
 
int main()
{
	long long n, res = 0;
	cin >> n;
	for (long long i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			long long j = n/i;
			if (i == j)
			{
				if (sol(i)) res = max(res, i);
			}
			else
			{
				if (sol(i)) res = max(res, i);
				if (sol(j)) res = max(res, j);
			}
		}
	}
	cout << res;
	return 0;
}
 
 

#include<iostream>
using namespace std;
long long res = 0, sl = 0;
bool check(long long a[], long long l, long long r)
{
	for (int i = l; i < r - 1; i++)
	{
		if (a[i] > a[i + 1]) return false;
	}
	return true;
}
void xuli(long long a[], long long l, long long r)
{
	long long s = 0;
	if (!check(a, l , r))
	{
		xuli(a, l, (l + r)/2);
		xuli(a, (l + r)/2, r);
	}
	else
	{
		for (int i = l; i < r; i++) s += a[i];
		long long sll = r - l;
		if (sll > sl || (sll == sl && s > res))
		{
			sl = sll;
			res = s;
		}
	}
}
main(){
	long long n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	long long l = 0, r = n;
	xuli(a, l, r);
	cout << sl << ' ' << res;
	return 0;
}
 

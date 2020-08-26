#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		int xMin = *min_element(a, a + n);
		//a[0] -= m;
		int gcd = a[0] - xMin;
		int m = xMin;
		for (int i = 0; i < n; i++)
		{
			a[i] -= m;
			gcd = __gcd(gcd, a[i]);
		}
		int res = 0;
		for (int i = 1; i <= sqrt(gcd); i++)
		{
			if (gcd % i == 0) 
			{
				if (i != gcd/i) res += 2;
				else res += 1;
			}
		}
		cout << res << endl;
	}
	return 0;
}
 
 

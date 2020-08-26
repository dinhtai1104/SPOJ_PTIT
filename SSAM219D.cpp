#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
bool bina(ll a[], ll l, ll r, ll key)
{
	while(l <= r)
	{
		ll mid = (l + r)/2;
		if (a[mid] == key) return true;
		else if (a[mid] > key) r = mid - 1;
		else l = mid + 1;
	}
	return false;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		ll n; cin >> n;
		ll a[n]; for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			a[i] *= a[i];
		}
		sort(a, a + n);
		bool flag = true;
		for (int i = 0; i < n - 2; i++)
		{
			for (int j = i + 1; j < n - 1; j++)
			{
				if (bina(a, j, n, a[i] + a[j])) 
				{
					cout << "YES" << endl;
					flag = false;
					goto end;
				}
			}
		}
		end:
		{
			if (flag == true) cout << "NO" << endl;
		}
	}
	return 0;
}
 
 

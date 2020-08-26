#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		map<ll, bool> a;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			ll x; cin >> x;
			if (x >= 0) a[x] = true;
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i]) cout << i << " ";
			else cout << -1 <<  " ";
		}
		cout << endl;
	}
	return 0;
}
 
 

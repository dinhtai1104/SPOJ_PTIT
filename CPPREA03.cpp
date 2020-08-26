#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n, k, g = 0, b = 0;
		cin >> n >> k;
		vector<long long> a;
		a.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] <= k) g++;
			//if (a[i] < 0 || a[i] >= n) a[i] = -1;
		}
		for (int i = 0; i < g; i++)
		{
			if (a[i] > k) b++;
		}
		long long res = b;
		for (int i = 0, j = g; j < n; j++, i++)
		{
			if (a[i] > k) b--;
			if (a[j] > k) b++;
			res = min(res, b);
		}
		cout << res;
		cout << endl;
	}
	return 0;
}
 
 

#include<bits/stdc++.h>
using namespace std;
 
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
		sort(a, a + n, greater<int>());
		int l = 0, r = n - 1;
		bool x = true;
		for (int i = 0; i < n; i++)
		{
			if (x)
				cout << a[l++] << " ";
			else cout << a[r--] << " ";
			x = !x;
		}
		cout << endl;
	}
	return 0;
}
 
 

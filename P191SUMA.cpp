#include<bits/stdc++.h>
using namespace std;
int res, l;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > l) l = a[i];
		if (i + 1 >= l) res++,l = i + 1; 
	}
	cout << res;
	return 0;
}
 
 

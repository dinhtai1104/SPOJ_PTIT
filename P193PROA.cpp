#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 
	int n, d = 0, MAX = -1e9, res = -1e9;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		MAX = max(a[i], MAX);
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == MAX) d++;
		else if (a[i] != MAX && d > 0)
		{
			d = 0;
		}
		res = max(d, res);
 
	}
	cout << res;
 
	return 0;
}
 
 

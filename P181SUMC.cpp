#include<bits/stdc++.h>
using namespace std;
int getMax(int a[], int n)
{
	int max_ = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > max_) max_ = a[i];
	return max_;
}
int main()
{
	int n;
	cin >> n; 
	int a[n], b[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	int maxA = getMax(a, n), maxB = getMax(b, n);
	if (maxB > maxA)
	{
		bool flag = true;
		for (int i = 0; i < n; i++)
		{
			if (a[i] % maxB != b[i])
			{
				flag = false; 
				break;
			}
		}
		if (flag) cout << maxB;
		else cout << -1;
	}
	else if (maxB < maxA)
	{
		for (int i = 1; i <= maxA; i++)
		{
			bool flag = true;
			for (int j = 0; j < n; j++)
			{
				if (a[j] % i != b[j])
				{
					flag = false; break;
				}
			}
			if (flag) 
			{
				cout << i;
				return 0;
			}
		}
		cout << -1;
	}
	else
	{
		bool flag = true;
		for (int i = 0; i < n; i++)
		{
			if (a[i] != b[i])
			{
				flag = false;
				break;
			}
		}
		if (flag) cout << maxA + 1;
		else cout << -1;
	}
	return 0;
}
 
 

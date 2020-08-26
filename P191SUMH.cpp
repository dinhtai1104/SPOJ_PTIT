#include<bits/stdc++.h>
using namespace std;
char a[100][100];
int n;
bool check()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == '.') return false;
		}
	}
	return true;
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == '.')
			{
				if (a[i + 1][j] == '.' && a[i + 1][j - 1] == '.' && a[i + 1][j + 1] == '.' && a[i + 2][j] == '.')
				{
					a[i][j] = a[i + 1][j] = a[i + 1][j - 1] = a[i + 1][j + 1] = a[i + 2][j] = '#';
				}
			}
		}
	}
	if (check()) cout << "YES";
	else cout << "NO";
	return 0;
}
 
 

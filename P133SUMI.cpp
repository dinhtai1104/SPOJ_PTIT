#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	char x[105];
	scanf("%s", x);
	int n = strlen(x);
	int r = 0, c;
	for (int i = 1; i < n; i++) // const: i == r;
	{
		if (n % i == 0)
		{
			if (i <= n/i) r = max(r, i);
		}
	}
	c = n/r;
	//cout << r << ' ' << c << endl;
	int t = 0;
	char kq[r][c];
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < r; j++)
		{
			kq[j][i] = x[t++];
		}
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%c", kq[i][j]);
		}
	}
 
	return 0;
}
 
 

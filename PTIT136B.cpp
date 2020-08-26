#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r, c;
	cin >> r >> c;
	char mpt[r][c], qb[2*r][2*c];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> mpt[i][j];
			qb[i][j] = mpt[i][j];
		}
	}
	int x, y; cin >> x >> y;
	int k = 0, l = 2*c - 1;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			qb[i][2*c - 1 - j] = mpt[i][j];
		}
	//	k++;
	}
	for (int i = r; i < 2*r; i++)
	{
		for (int j = 0; j < 2*c; j++)
		{
			qb[i][j] = qb[2*r - i - 1][j];
		}
	}
	qb[x - 1][y - 1] = qb[x - 1][y - 1] == '.'?'#':'.';
	for (int i = 0; i < 2*r; i++)
	{
		for (int j = 0; j < 2 * c; j++)
		{
			cout << qb[i][j];
		}
		cout << endl;
	}
	return 0;
}
 
 

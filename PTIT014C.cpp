#include<bits/stdc++.h>
#include<vector>
using namespace std;
int LCS(string a, string b)
{
	int res = 0;
	vector< vector<int> > f(50, vector<int>(50, 0));
	a = "." + a;
	b = "," + b;
	for (int i = 1; i <= a.length(); i++)
	{
		for (int j = 1; j <= b.length(); j++)
		{
			if (a[i] == b[j])
			{
				f[i][j] = f[i - 1][j - 1] + 1;
			}
			else f[i][j] = max(f[i - 1][j], f[i][j - 1]);
		}
	}
	return f[a.length()][b.length()] - 1;
}
int main()
{
	int t;
	cin >> t; 
	while(t--)
	{
		int res = 0;
		int n; cin >> n;cin.ignore();
		string xau[n];
		for (int i = 0; i < n; i++)
		{
			cin >> xau[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				res = max(res, LCS(xau[i], xau[j]));
			}
		}
		cout << res << endl;
	}
	return 0;
}
 
 

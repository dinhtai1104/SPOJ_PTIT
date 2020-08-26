#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	int n, s = 0;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (j >= i) s += i + j;
		}
	}
	cout << s;
	return 0;
}
 
 

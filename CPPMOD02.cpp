#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a, m;
		cin >> a >> m;
		bool flag = false;
		for (int i = 0; i < m; i++)
		{
			if ((a * i) % m == 1) 
			{
				cout << i << endl;
				flag = true;
				break;
			}
		}
		if (!flag) cout << -1 << endl;
	}
	return 0;
}
 
 

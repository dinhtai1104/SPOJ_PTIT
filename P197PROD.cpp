#include<iostream>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int m, n;
		cin >> m >> n;
		int sm = 0, sn = 0;
		for (int i = 0; i < m; i++)
		{
			int x;
			cin >> x;
		}
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
		}
		if (m > n) cout << "No";
		else cout << "Yes";
		cout << endl;
	}
	return 0;
}
 
 

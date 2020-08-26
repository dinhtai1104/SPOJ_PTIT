#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n;
 
//int dem[100000];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int vd = 0;
	cin >> n;
	while (n--)
	{
		int d = 0;
		for (int i = 0; i < 3; i++)
		{
			int x;
			cin >> x;
			if (x == 1) d++;
		}
		if (d >= 2) vd++;
	}
	cout << vd;
//	system("pause");
} 

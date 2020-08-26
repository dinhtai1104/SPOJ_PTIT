#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
 
typedef long long ll;
void Solve();
int main()
{
	//freopen("", "w", stdout);
	//freopen("", "r", stdin);
	int Test_Case;
	cin >> Test_Case;
	while (Test_Case--)
	{
		Solve();
	}
	system("pause");
	return 0;
}
 
 
void Solve()
{
	int n;
	cin >> n;
	vector<ll> a;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	for (int i = 0; i < n - 1; i++)
	{
		//if (a[i] == 0 && a[i + 1] != 0) swap(a[i], a[i + 1]);
		
		if (a[i] == a[i + 1])
		{
			a[i] += a[i + 1];
			a[i + 1] = 0;
		}
		//if (a[i] == 0 && a[i + 1] != 0) swap(a[i], a[i + 1]);
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != 0)
		{
			a[cnt++] = a[i];
		}
	}
	while (cnt < n)
	{
		a[cnt++] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
 

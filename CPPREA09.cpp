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
	vector<ll> b;
	for (int i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		a.push_back(x);
	}
	b.push_back(a[0] * a[1]);
	for (int i = 1; i < n - 1; i++)
	{
		ll x = a[i - 1] * a[i + 1];
		b.push_back(x);
	}
	b.push_back(a[n - 1] * a[n - 2]);
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
}
 

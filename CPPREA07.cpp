#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
 
typedef long long ll;
void Solve();
bool cmp(string, string);
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
 
bool cmp(string a, string b)
{
	string X = a + b;
	string Y = b + a;
	return X > Y;
}
void Solve()
{
	int n;
	cin >> n;
	cin.ignore();
	vector <string> a;
	for (int i = 0; i < n; i++)
	{
		string x;
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end(), cmp);
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
	cout << endl;
}
 

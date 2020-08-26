#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int a[22];
int n, k;
void Init()
{
	cin >> n >> k;
	for (int i = 1; i <= k; i++) a[i] = i;
}
bool IsOK()
{
	for (int i = k; i >= 1; i--)
	{
		if (a[i] != n - k + i) return false;
	}
	return true;
}
void Sinh()
{
	while(!IsOK())
	{
		for (int i = 1; i <= k; i++)
			cout << a[i] << " ";
		cout << "\n";
		int i = k;
		while(a[i] == n - k + i)
		{
			i--;
			//a[i] += 1;
		}
		a[i] += 1;
		for (int j = i + 1; j <= k; j++)
		{
			a[j] = a[i] + j - i;
		}
	}
	for (int i = 1; i <= k; i++) cout << a[i] << " ";
}
int main()
{
	Init();
	Sinh();
	return 0;
}
 

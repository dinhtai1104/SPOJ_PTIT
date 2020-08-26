#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	long s = 0, s1 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		s1 += a[i];
	}
	s1 -= a[0];
	for (int i = 0; i < n - 1; i++)
	{
		s += a[i] * s1;
		s1 -= a[i + 1];
	}
	cout << s;
	return 0;
}
 
 

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int s = 0, d =0;
	for (int i = 0; i < n; i++)
		if (s + a[i] <= 300)
		{
			s += a[i];
			d++;
		}
		else break;
	s = 0;
	for (int i = 1; i < n; i++)
		a[i] += a[i - 1];
	for (int i = 0; i < d; i++)
		s += a[i];
	cout << d << ' ' << s;
	return 0;
}
 
 

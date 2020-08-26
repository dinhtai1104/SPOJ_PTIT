#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int d = 0;
	for (int i = 0, j = n - 1; i < n, j >= 0;)
	{
		if (a[i] == a[j])
		{
			j--;
			i++;
			if (j <= i) break;
		}
		else if (a[i] < a[j])
		{
			a[i + 1] += a[i];
			d++;
			i++;
		}
		else if (a[i] > a[j])
		{
			a[j - 1] += a[j];
			d++;
			j--;
		}
	}
	cout << d;
	return 0;
}
 

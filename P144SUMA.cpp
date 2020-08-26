#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string h[n];
	for (int i = 0; i < n; i++)
	{
		cin >> h[i];
	}
	int d = 1;
	for (int i = 0; i < n - 1; i++)
		if (h[i] != h[i + 1]) d++;
	cout << d;
	return 0;
}
 

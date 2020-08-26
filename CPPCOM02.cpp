#include <iostream>
using namespace std;
int n, a[30], k;
void Sinh()
{
	for (int i = 1; i <= k; i++) a[i] = i;
	while(1)
	{
		for (int i = 1; i <= k; i++) cout << a[i];
		cout << " ";
		int i = k;
		while(i >0 && a[i] == n - k + i)
		{
			i--;
		}
		if (i == 0) break;
		a[i] += 1;
		for (int j = i + 1; j <= k; j++)
		{
			a[j] = a[i] + j - i;
		}
	}
}
void Solve()
 
{
	cin >> n >> k;
	Sinh();
	cout << endl;
}
int main() {
	
	// your code here
	int t;
	cin >> t;
	while(t--)
	{
		Solve();
	}
 
	return 0;
} 

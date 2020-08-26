#include <iostream>
using namespace std;
int n, a[25];
void Sinh(int i)
{
	for (int j = 0; j < 2; j++)
	{
		a[i] = j;
		if (i == n)
		{
			for (int k = 1; k <= n;k++)
			{
				cout << a[k];
			}
			cout << " ";
		}
		else Sinh(i + 1);
	}
}
void Solve()
 
{
	cin >> n;
	Sinh(1);
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

#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int main() {
	
	// your code here
	int t;
	cin >> t;
	while(t--)
	{
		ll a, x, y;
		cin >> a >>x >> y;
		ll gcd = __gcd(x, y);
		for (int i = 0; i < gcd; i++)
		{
			cout << a;
		}
		cout << endl;
	}
	return 0;
} 

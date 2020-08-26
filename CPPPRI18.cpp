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
		ll m,n,a,b, d= 0;
		cin >> m >> n>>a>>b;
		for (int i = m; i <= n; i++)
		{
			if (i % a == 0 || i % b == 0 && i % (a * b/__gcd(a, b)) != 0) d++;
		}
		cout << d << endl;
	}
	return 0;
} 

#include <iostream>
using namespace std;
#include <algorithm>
int main() {
	
	// your code here
	int t;
	cin >> t;
	while(t--)
	{
		long long a, b, gcd, lcm;
		cin >> a >> b;
		gcd = __gcd(a, b);
		lcm = a * b / gcd;
		cout << lcm << " " << gcd << endl;
	}
 
	return 0;
} 

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
long long lcm(long long x, long long y)
{
	return x * y / __gcd(x, y);
}
int main(){
	int t;
	cin >> t;
	while(t--)
	{
		long long a, b, c, n;
		cin >> a >> b >> c >> n;
		long long z = lcm(a, lcm(b, c));
		long long t1 = pow(10, n - 1), t2 = pow(10, n);
		if (z >= t2) cout << -1 << endl;
		else
		{
			if (t1 % z == 0) cout << t1 << endl;
			else cout << (t1/z + 1) *z << endl;
		}
	}
	return 0;
}
 

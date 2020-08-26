#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	unsigned long long a, b, x, y, z;
	cin >> a >> b >> x >> y >> z;
	unsigned long long canhhuyen = max(x, max(y, z));
	if (canhhuyen ==  x)
	{
		if (x*x == y*y + z*z && x*x <= a*a + b*b) cout << "YES";
		else cout << "NO";
	}
	else if (canhhuyen == y)
	{
		if (y*y == x*x + z*z && canhhuyen <= a*a + b*b) cout << "YES";
		else cout << "NO";
	}
	else if (canhhuyen == z)
	{
		if (z*z == x*x + y*y && canhhuyen <= a*a + b*b) cout << "YES";
		else cout << "NO";
	}
	return 0;
}
 
 

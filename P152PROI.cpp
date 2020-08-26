#include <iostream>
#include <algorithm>
using namespace std;
struct Phanso
{
	long tu, mau;
};
int gcd(long a, long b)
{
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		long n;
		cin >> n;
		if (n == 180) cout << '$' << endl;
		else
		{
			n %= 360;
			if (n == 0) cout << 0 << '$' << endl;
			else
			{
				long k = gcd(n, 180);
				if (k == 180) cout << "$" << endl;
				else
				if (n / k == 1) cout << "$/" << 180 / k << endl;
				else cout << n / k << "$/" << 180 / k << endl;
			}
		}
	}
//	system("pause");
} 

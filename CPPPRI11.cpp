#include <iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main() {
	
	// your code here
	int t;
	cin >> t;
	while(t--)
	{
		ll a;
		cin >>a ;
		if (a >= 1e12) cout << 0;
		else
		{
			ll s = 0, tmp = a;
			for (int i = 1; i <= sqrt(a); i++)
			{
				if (a % i == 0)
				{
					ll j = a/i;
					if (i != j) s += i + j;
					else s += i;
				}
			}
			if (s == 2 * a) cout << 1;
			else cout << 0;
		}
		cout<<endl;
	}
	return 0;
} 

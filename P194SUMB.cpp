#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		long a;
		cin >> a;
		if (a % 2 == 0) a = a * a / 2;
		else a = (a * a)/2 + 1;
		if (a % 2 == 0) cout << "Haley" << endl;
		else cout << "Leviz" << endl;
	}
	return 0;
}
 
 

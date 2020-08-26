#include<iostream>
using namespace std;
int main()
{
	int n;
	do
	{
		cin >> n;
		if ( n>0 )
		if (n <= 1000000) cout << n << endl;
		else	if (n <= 5000000) cout << n*9/10 << endl;
				else cout << n*8/10 << endl;
	} while ( n != 0);
	return 0;
} 

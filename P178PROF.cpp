#include<iostream>
using namespace std;
int main()
{
	do 
	{
		int n;
		cin >> n;
		if (n == 0) return 0;
		int d = 1;
		while(n != 1)
		{
			if (n % 2 == 0)
			{
				n /= 2;
				d++;
			}
			else
			{
				n = 3 * n + 1;
				d++;
			}
		}
		cout << d << endl;
	}while(true);
	return 0;
}
 

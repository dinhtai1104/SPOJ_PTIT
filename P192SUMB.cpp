#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
	long  n, k;
	cin >> n >> k;
	long x = (-3 + sqrt(3*3 + 8*n + 8*k))/2;
	cout << n - x;
	return 0;
}
 
 

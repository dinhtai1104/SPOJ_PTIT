#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long lol;
string a, b;
int xet(string a, string b, int prt1, int prt2)
{
	int d = 0, j = 0;
	for (int i = prt1; i < prt2; i++)
	{
		if(a[i] != b[j++]) d++;
	}	
	if (d % 2 == 0) return 1;
	return 0;
}
 
int main()
{
	cin >> a >> b;
	int res = 0;
	int ptr1 = 0,ptr2 = b.length();
	while(1)
	{
		if (ptr2 > a.length()) break;
		res += xet(a, b, ptr1, ptr2);
		ptr1++; ptr2++;
	}
	cout << res;
} 

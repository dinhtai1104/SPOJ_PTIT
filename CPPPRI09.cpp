#include <iostream>
#include <string>
#include<cmath>
#include <algorithm>
using namespace std;
 
void Solve();
int main()
{
	int Test_Case;
	cin >> Test_Case;
	while (Test_Case--)
	{
		Solve();
	}
//	system("pause");
	return 0;
}
 
void Solve()
{
	int i = 2;
	int n;
	cin >> n;
	int d = 0;
	int s = sqrt(n);
	for (int i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			d++;
			n /= i;
		}
		if (d != 0)
		{
			cout << i << " " << d << " ";
			d = 0;
		}
	}
	cout << endl;
}
 
/*
Cho sá» tá»± nhiÃªn N. Nhiá»m vá»¥ cá»§a báº¡n lÃ  hÃ£y ÄÆ°a ra táº¥t cáº£ cÃ¡c Æ°á»c sá» nguyÃªn tá» cá»§a N cÃ¹ng lÅ©y thá»«a cá»§a nÃ³. VÃ­
dá»¥ N=100 = 2^2 Ã 5^2. N = 35 =5^1 Ã 7^1.
Input:
ï· DÃ²ng Äáº§u tiÃªn ÄÆ°a vÃ o sá» lÆ°á»£ng test T.
ï· Nhá»¯ng dÃ²ng káº¿ tiáº¿p ÄÆ°a vÃ o cÃ¡c bá» test. Má»i bá» test lÃ  má»t sá» nguyÃªn N.
ï· T, N thá»a mÃ£n rang buá»c 1â¤Tâ¤100; 1â¤Nâ¤10000
*/ 

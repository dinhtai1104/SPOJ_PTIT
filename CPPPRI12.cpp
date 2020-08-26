#include <iostream>
#include <string>
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
	system("pause");
	return 0;
}
void Solve()
{
	int n, k;
	cin >> n >> k;
	int d = 0;
	for (int i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			d++;
			if (d == k)
			{
				cout << i << endl;
				return;
			}
			n /= i;
		}
	}
	cout << -1 << endl;
}
 
 
/*
Kth Prime Divisors. Cho sá» tá»± nhiÃªn N. Nhiá»m vá»¥ cá»§a báº¡n lÃ  hÃ£y ÄÆ°a ra Æ°á»c sá» nguyÃªn tá» thá»© k cá»§a N. ÄÆ°a ra -
1 náº¿u khÃ´ng tá»n táº¡i Æ°á»c sá» thá»© k cá»§a N. VÃ­ dá»¥ N = 255, k =2 ta cÃ³ káº¿t quáº£ lÃ  3 vÃ¬ 255 = 3Ã3Ã5Ã5. Vá»i N = 81, k =
5 ta cÃ³ káº¿t quáº£ -1 vÃ¬ 81 = 3Ã3Ã3Ã3.
Input:
ï· DÃ²ng Äáº§u tiÃªn ÄÆ°a vÃ o sá» lÆ°á»£ng test T.
ï· Nhá»¯ng dÃ²ng káº¿ tiáº¿p ÄÆ°a vÃ o cÃ¡c bá» test. Má»i bá» test lÃ  má»t bá» ÄÃ´i N vÃ  k.
ï· T, N thá»a mÃ£n rang buá»c 1â¤Tâ¤100; 1â¤N, kâ¤10^4.
*/ 

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
	int n, p;
	cin >> n >> p;
	int x = 0;
	// x = n/p + n/(p^2) + n/(p^3) + .... 
	while (n)
	{
		n /= p;
		x += n;
	}
	cout << x << endl;
}
 
/*
Cho sá» tá»± nhiÃªn N vÃ  sá» nguyÃªn tá» P. Nhiá»m vá»¥ cá»§a báº¡n lÃ  tÃ¬m sá» x lá»n nháº¥t Äá» N! chia háº¿t cho px. VÃ­ dá»¥ vá»i N=7,
p=3 thÃ¬ x=2 lÃ  sá» lá»n nháº¥t Äá» 7! Chia háº¿t cho 32.
Input:
ï· DÃ²ng Äáº§u tiÃªn ÄÆ°a vÃ o sá» lÆ°á»£ng bá» test T.
ï· Nhá»¯ng dÃ²ng káº¿ tiáº¿p ÄÆ°a vÃ o cÃ¡c bá» test. Má»i bá» test lÃ  cáº·p sá» N, p ÄÆ°á»£c viáº¿t cÃ¡ch nhau má»t vÃ i khoáº£ng
trá»ng.
ï· T, N, p thá»a mÃ£n rang buá»c : 1â¤Tâ¤100; 1â¤Nâ¤105; 2â¤pâ¤5000
*/ 

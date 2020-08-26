#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
 
typedef long long ll;
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
	int n; ll k;
	cin >> n >> k;
	ll s = 0;
	ll x = n / k, y = n % k;
	s += ((k - 1)*k / 2)*x;
	s += (y*(y + 1) / 2);
	if (s == k) cout << 1 << endl;
	else cout << 0 << endl;
}
 
 
/*
	Cho hai sá» nguyÃªn khÃ´ng Ã¢m N vÃ  K. Nhiá»m vá»¥ cá»§a báº¡n lÃ  kiá»m tra xem K = 1%K + 2%K + ..+ N%K hay khÃ´ng.
	ÄÆ°a ra 1 hoáº·c 0 náº¿u cáº·p N, K thá»a mÃ£n hoáº·c khÃ´ng thá»a mÃ£n yÃªu cáº§u bÃ i toÃ¡n. VÃ­ dá»¥ vá»i N = 10, K=55 ta cÃ³ káº¿t
	quáº£ lÃ  1 vÃ¬ 55= 1%55 + 2%55+3%55 + ..+ 10%55. NgÆ°á»£c láº¡i, N=4, K=11 cÃ³ káº¿t quáº£ lÃ  0 vÃ¬ 11â 1%11+
	2%11+3%11+4%11.
	Input:
	ï· DÃ²ng Äáº§u tiÃªn ÄÆ°a vÃ o sá» lÆ°á»£ng test T.
	ï· Nhá»¯ng dÃ²ng káº¿ tiáº¿p má»i dÃ²ng ÄÆ°a vÃ o má»t test. Má»i test lÃ  bá» ÄÃ´i N, K ÄÆ°á»£c viáº¿t cÃ¡ch nhau
	má»t vÃ i khoáº£ng trá»ng.
	ï· T, N, K thá»a mÃ£n rÃ ng buá»c : 1â¤Tâ¤100; 0â¤N â¤1000; 0â¤K â¤10^12.

*/ 

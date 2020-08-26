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
	cout << s << endl;
}
 
 
/*
	Cho hai sá» nguyÃªn khÃ´ng Ã¢m N vÃ  K. Nhiá»m vá»¥ cá»§a báº¡n lÃ  tÃ¬m S = 1%K + 2%K + ..+ N%K. VÃ­ dá»¥ vá»i N = 10, K=2
	ta cÃ³ S = 1%2 + 2%2+3%2 + 4%2+5%2+6%2+7%2+8%2+9%2+10%2 = 5. YÃªu cáº§u Äá» phá»©c táº¡p thuáº­t toÃ¡n lÃ 
	háº±ng sá»
	Input:
	ï· DÃ²ng Äáº§u tiÃªn ÄÆ°a vÃ o sá» lÆ°á»£ng test T.
	ï· Nhá»¯ng dÃ²ng káº¿ tiáº¿p má»i dÃ²ng ÄÆ°a vÃ o má»t test. Má»i test lÃ  bá» ÄÃ´i N, K ÄÆ°á»£c viáº¿t cÃ¡ch nhau
	má»t vÃ i khoáº£ng trá»ng.
	ï· T, N, K thá»a mÃ£n rÃ ng buá»c : 1â¤Tâ¤100; 0â¤ N â¤1000; 0â¤ K â¤10^12.
 
*/ 

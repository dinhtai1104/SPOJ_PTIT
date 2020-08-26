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
	ll m, k = 0;
	string n;
	cin >> n >> m;
	for (int i = 0; i < n.length(); i++)
	{
		k = (k * 10 + n[i] - '0') % m;
	}
	cout << k << endl;
}
 
/*
Cho sá» nguyÃªn dÆ°Æ¡ng N ráº¥t lá»n ÄÆ°á»£c biá»u diá»n nhÆ° má»t xÃ¢u vÃ  sá» M. HÃ£y tÃ¬m K = N%M. VÃ­ dá»¥
N=123456789873123456778976, M = 100 thÃ¬ K=76.
Input:
ï· DÃ²ng Äáº§u tiÃªn ÄÆ°a vÃ o sá» lÆ°á»£ng test T.
ï· Nhá»¯ng dÃ²ng káº¿ tiáº¿p má»i dÃ²ng ÄÆ°a vÃ o cÃ¡c test. Má»i test lÃ  bá» ÄÃ´i N, M ÄÆ°á»£c viáº¿t trÃªn hai
dÃ²ng khÃ¡c nhau.
ï· T, N, M thá»a mÃ£n rÃ ng buá»c : 1â¤Tâ¤100; 0â¤length(N) â¤1000; 2â¤M â¤10^12
*/
 

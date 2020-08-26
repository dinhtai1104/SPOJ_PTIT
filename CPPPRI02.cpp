#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
bool isPr(long long n)
{
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}
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
	vector <long long> Pr;
	long long n;
	cin >> n;
	for (long long i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			long long j = n / i;
			if (i != j)
			{
				if (isPr(i)) Pr.push_back(i);
				if (isPr(j)) Pr.push_back(j);
			}
			else if (isPr(i)) Pr.push_back(i);
		}
	}
	if (isPr(n)) Pr.push_back(n);
	sort(Pr.begin(), Pr.end());
	cout << Pr[Pr.size() - 1] << endl;
}
/*
	Max Prime Facstors. Cho sá» nguyÃªn dÆ°Æ¡ng N. HÃ£y ÄÆ°a ra Æ°á»c sá» nguyÃªn tá» lá»n nháº¥t cá»§a N.
Input:
ï· DÃ²ng Äáº§u tiÃªn ÄÆ°a vÃ o sá» lÆ°á»£ng bá» test T.
ï· Nhá»¯ng dÃ²ng káº¿ tiáº¿p ÄÆ°a vÃ o T bá» test. Má»i bá» test lÃ  má»t sá» nguyÃªn dÆ°Æ¡ng N ÄÆ°á»£c ghi trÃªn má»t dÃ²ng.
ï· T, N thá»a mÃ£n rÃ ng buá»c: 1â¤Tâ¤100; 2â¤Nâ¤10^10.
*/ 

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
 
typedef long long ll;
void Solve();
ll Reduce(string, ll);
ll POW(ll a, ll b, ll c)
{
	if (b == 0) return 1;
	if ( b == 1) return a % c;
	ll x = POW(a, b/2, c) % c;
	x = (x * x) % c;
	if (b % 2 == 0) 
	{
		return x % c;
	}
	return a * x % c;
}
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
	ll b, m;
	string a;
	cin >> a >> b >> m;
	ll c = Reduce(a, m);
	cout << POW(c, b, m)<< endl;
}
 
ll Reduce(string a, ll m)
{
	ll s = 0;
	for (int i = 0; i < a.length(); i++)
	{
		if (s >= m) s %= m;
		if (s < m) {
			s = s * 10 + a[i]-'0';
		}
	}
	return s;
}
 
/*
Cho s? nguyÃªn duong a, b, M, trong dÃ³ a lÃ  s? r?t l?n du?c bi?u di?n nhu m?t xÃ¢u kÃ½ t? s?. HÃ£y tÃ¬m K = (a^b)
%M. VÃ­ d? a = 3, b=2, M = 4 thÃ¬ K = (3^2)%4 = 1
Input:
? DÃ²ng d?u tiÃªn dua vÃ o s? lu?ng test T.
? Nh?ng dÃ²ng k? ti?p m?i dÃ²ng dua vÃ o m?t test. M?i test lÃ  b? ba a, b, M du?c vi?t trÃªn m?t
dÃ²ng.
? T, a, b, M th?a mÃ£n rÃ ng bu?c : 1=T=100; 0=length(a) =1000; 2= b, M =10^12.

*/ 

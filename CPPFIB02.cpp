#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
 
typedef long long ll;
const ll mod = 1;
 
class Fibonac
{
public:
	Fibonac();
	~Fibonac();
 
	void Process();
	void Init();
	void Display(ll n);
private:
//	vector<ll> a;
	ll a[93];
	/*
	fn = fn-1 + fn-2
	fn		1 1
	fn - 1  1 0
	*/
};
 
Fibonac::Fibonac()
{
	//fib[]
}
 
Fibonac::~Fibonac()
{
}
 
void Fibonac::Process()
{
	//a.resize(93);
	a[0] = 0, a[1] = 1;
	for (int i = 2; i < 92; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		//cout << a[i] << endl;
	//	a[i] %= mod;
	}
}
 
void Fibonac::Display(ll n)
{
	for (int i = 0; i < 92; i++)
	{
	//	cout << a[i] << endl;
		if (n == a[i])
		{
			cout << "YES";
			cout << endl;
			return;
		}
	}
	cout << "NO" << endl;
 
}
 
int main()
{
	Fibonac *x = new Fibonac();
	x->Process();
	int TC;
	cin >> TC;
	while (TC--)
	{
		ll n; cin >> n;
		x->Display(n);
	}
 
//	system("pause");
	return 0;
}
 
 
/*
DÃ£y s? Fibonacci du?c d?nh nghia Fn = Fn-1 + Fn-2, n>1 vÃ  F0 = 0, F1 = 1. Du?i dÃ¢y lÃ  m?t s? s? Fibonacci : 0, 1, 1,
2, 3, 5, 8, 13, 21â¦
Nhi?m v? c?a b?n lÃ  tÃ¬m s? Fibonacci th? n.
Input:
? DÃ²ng d?u tiÃªn dua vÃ o s? lu?ng b? test T.
? Nh?ng dÃ²ng k? ti?p dua vÃ o cÃ¡c b? test. M?i b? test lÃ  m?t s? nguyÃªn duong n.
? T, n th?a mÃ£n rÃ ng bu?c :1 = T = 100; 1=n=1000.
Output:
? Ãua ra k?t qu? m?i test theo modulo 10^9 + 7 theo t?ng dÃ²ng
*/ 

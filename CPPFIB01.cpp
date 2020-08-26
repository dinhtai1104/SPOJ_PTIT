#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
 
typedef long long ll;
 
const ll mod = 1e9 + 7;
 
class Fibonac
{
public:
	Fibonac();
	~Fibonac();
	
	void Process();
	void Init();
	void Display(int n);
private:
	vector<ll> a;
	/*
	fn = fn-1 + fn-2
	fn		1 1
	fn - 1  1 0
	*/
};
 
Fibonac::Fibonac()
{
	a.resize(1005);
	//fib[]
}
 
Fibonac::~Fibonac()
{
}
 
void Fibonac::Process()
{
	a[0] = 0, a[1] = 1;
	for (int i = 2; i < 1005; i++)
	{
		a[i] = a[i - 1] % mod + a[i - 2] % mod;
		a[i] %= mod;
	}
}
 
void Fibonac::Display(int n)
{
	cout << a[n] << endl;
}
 
int main()
{
	Fibonac *x = new Fibonac();
	x->Process();
	int TC;
	cin >> TC;
	while (TC--)
	{
		int n; cin >> n;
		x->Display(n);
	}
 
	system("pause");
	return 0;
}
 
 
/*
DÃ£y sá» Fibonacci ÄÆ°á»£c Äá»nh nghÄ©a Fn = Fn-1 + Fn-2, n>1 vÃ  F0 = 0, F1 = 1. DÆ°á»i ÄÃ¢y lÃ  má»t sá» sá» Fibonacci : 0, 1, 1,
2, 3, 5, 8, 13, 21â¦
Nhiá»m vá»¥ cá»§a báº¡n lÃ  tÃ¬m sá» Fibonacci thá»© n.
Input:
ï· DÃ²ng Äáº§u tiÃªn ÄÆ°a vÃ o sá» lÆ°á»£ng bá» test T.
ï· Nhá»¯ng dÃ²ng káº¿ tiáº¿p ÄÆ°a vÃ o cÃ¡c bá» test. Má»i bá» test lÃ  má»t sá» nguyÃªn dÆ°Æ¡ng n.
ï· T, n thá»a mÃ£n rÃ ng buá»c :1 â¤ T â¤ 100; 1â¤nâ¤1000.
Output:
ï· ÄÆ°a ra káº¿t quáº£ má»i test theo modulo 10^9 + 7 theo tá»«ng dÃ²ng
*/ 

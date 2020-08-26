#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
 
typedef long long ll;
 
 
class DayF
{
public:
	DayF();
	~DayF();
	void Init();
	void Process();
	void Display();
private:
	int n;
	vector<int> arr;
	vector<int> Fi;
	//vector<int> fib;
};
 
DayF::DayF()
{
}
 
DayF::~DayF()
{
}
void DayF::Init()
{
	cin >> n;
	arr.resize(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];
}
void DayF::Process()
{	
	Fi.resize(93);
	Fi[0] = 0, Fi[1] = 1;
	
	for (int i = 2; i < 93; i++)
	{
		Fi[i] = Fi[i - 1] + Fi[i - 2];
	}
}
void DayF::Display()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 93; j++)
		{
			if (arr[i] == Fi[j])
			{
				cout << arr[i] << " ";
				break;
			}
		}
	}
	cout << endl;
}
int main()
{
	//freopen("", stdin);
	//freopen("", stdout);
	DayF *x = new DayF();
	x->Process();
	int TC;
	cin >> TC;
	while (TC--)
	{
		x->Init();
		x->Display();
	}
//	system("pause");
	return 0;
}
 
 
 
/*
Cho máº£ng A[] gá»m n sá» nguyÃªn khÃ´ng Ã¢m. HÃ£y tÃ¬m dÃ£y con lá»n nháº¥t chá» toÃ n cÃ¡c sá» Fibonacci.
Input:
ï· DÃ²ng Äáº§u tiÃªn ÄÆ°a vÃ o sá» lÆ°á»£ng bá» test T.
ï· Nhá»¯ng dÃ²ng káº¿ tiáº¿p ÄÆ°a vÃ o cÃ¡c bá» test. Má»i bá» test gá»m hai dÃ²ng: dÃ²ng thá»© nháº¥t ÄÆ°a vÃ o n
lÃ  sá» pháº§n tá»­ cá»§a máº£ng A[]; dÃ²ng tiáº¿p theo ÄÆ°a vÃ o n sá» cÃ¡c pháº§n tá»­ cá»§a máº£ng A[]; cÃ¡c sá»
ÄÆ°á»£c viáº¿t cÃ¡ch nhau má»t vÃ i khoáº£ng trá»ng.
ï· T, n, A[i] thá»a mÃ£n rÃ ng buá»c :1 â¤ T â¤ 100; 1â¤nâ¤100; 1â¤A[i]â¤1000.
 
*/ 

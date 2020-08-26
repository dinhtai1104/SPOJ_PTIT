#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;
//#pragma warning(disable : 4996)
typedef long long ll;
 
class Add
{
public:
	Add();
	~Add();
	void Init();
	bool check();
	void Add_2_numbers();
	void Display();
	char *strrev(char *str)
{
      char *p1, *p2;
 
      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
 
 
private:
	char *a, *b, *c;
	int mark;
};
 
Add::Add()
{
	a = new char[1000];
	b = new char[1000];
	mark = 0;
}
 
Add::~Add()
{
	delete[] a;
	delete[] b;
}
 
void Add::Init()
{
	cin >> a >> b;
}
 
bool Add::check()
{
	// check a > b
	if (strlen(a) > strlen(b)) return true;
	else if (strlen(a) == strlen(b))
	{
		if (strcmp(a, b) > 1) return true;
	}
	return false;
	return false;
}
 
void Add::Add_2_numbers()
{
	if (!Add::check())
	{
		char *tmp = new char[1000];
		strcpy(tmp, a);
		strcpy(a, b);
		strcpy(b, tmp);
	}
	strrev(a); strrev(b);
	strcat(a, "0");
	while (strlen(b) < strlen(a))
	{
		strcat(b, "0");
	}
	c = new char[strlen(a)];
	int nho = 0;
	for (int i = 0; i < strlen(a); i++)
	{
		int x = a[i] - '0';
		int y = b[i] - '0' + nho;
		int k = x + y;
		nho = (x + y) / 10;
		k %= 10;
		c[i] = k + '0';
	}
	c[strlen(a)] = '\0';
	strrev(c);
	while (c[mark] == '0')
	{
		mark++;
	}
	if (mark == strlen(c)) mark--;
}
 
void Add::Display()
{
	for (size_t i = mark; i < strlen(c); i++)
	{
		cout << c[i];
	}
	cout << endl;
}
 
int main()
{
	int TC;
	cin >> TC;
	cin.ignore();
	while (TC--)
	{
		Add *x = new Add();
		x->Init();
		x->Add_2_numbers();
		x->Display();
	}
 
//	system("pause");
	return 0;
}
 

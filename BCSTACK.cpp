#include <iostream>
#include <stack>
#include <string>
 
using namespace std;
stack <int> a;
void Init()
{
	while (a.size() != 0)
	{
		a.pop();
	}
}
void Push(int x)
{
	a.push(x);
}
void Pop()
{
	if (a.size() != 0)
	a.pop();
}
 
int Top()
{
	if (a.size() != 0) return a.top();
	else return -1;
}
int Size()
{
	return a.size();
}
 
int Empty()
{
	if (a.size() == 0) return 1;
	else return 0;
}
 
 
int main()
{
	string h;
	while (1)
	{
		cin >> h;
		cin.ignore();
		if (h == "init") Init();
		if (h == "push")
		{
			long x;
			cin >> x;
			Push(x);
		}
		if (h == "pop") Pop();
		if (h == "size")
		{
			cout << Size() << endl;
		}
		if (h == "empty") cout << Empty() << endl;
		if (h == "top") cout << Top() << endl;
		if (h == "end") return 0;
	}
//	system("pause");
} 

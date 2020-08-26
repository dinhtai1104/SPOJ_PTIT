#include <iostream>
#include <queue>
#include <string>
using namespace std;
queue <int> a;
void ham()
{
	while (a.size() != 0) a.pop();
}
int Size()
{
	return a.size();
}
void Empty()
{
	if (Size() == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
}
void Push(int x)
{
	a.push(x);
}
 
void Pop()
{
	if (Size() != 0) a.pop();
}
int Front()
{
	if (Size() == 0) return -1;
	else return a.front();
}
 
int Back()
{
	if (Size() == 0) return -1;
	else return a.back();
}
int main()
{
	ham();
	int h;
	int n;
	cin >> n;
	while (n--)
	{
		cin >> h;
		if (h == 1)	cout << Size() << endl;
		else if (h == 2) Empty();
		else if (h == 3)
		{
			int x;
			cin >> x;
			Push(x);
		}
		else if (h == 4) Pop();
		else if (h == 5) cout << Front() << endl;
		else if (h == 6) cout << Back() << endl;
	}
//	system("pause");
} 

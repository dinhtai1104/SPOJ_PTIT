#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int v, x, d;
	cin >> v >> x >> d;
//	for (int i = 1; i <= v; i++)
//	{
//		if (x > d) x = d - 1;
//		if (v > x) v = x - 1;
//	}
//	int x = min(v, min(x, d));
//	if (x == v)
//	{
//		x = v + 1;
//		d = v + 2;
//	}
//	else if ()
	int i, t;
	for (i = 1; i <= v; i++)
	{
		if (i + 1 <= x && i + 2 <= d)
			t = i;
	}
	cout << t + t + 1 + t + 2;
	return 0;
}
 
 

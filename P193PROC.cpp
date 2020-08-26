#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	string h;
	int a[127] = {0}, d = 0, dm = 0;
	cin >> h;
	for (int i = 0; i < h.length(); i++)
	{
		a[h[i]]++;
	}
//	for (int i = 0; i <= 127; i++)
//	{
//		if (a[i]) d++;
//	}
	sort(a, a + 126, cmp);
	for (int i = 2; i < 127; i++)
	{
		if (a[i]) dm += a[i];
	}
	cout << dm;
	return 0;
} 

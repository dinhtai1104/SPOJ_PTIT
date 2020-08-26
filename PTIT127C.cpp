#include<bits/stdc++.h>
using namespace std;
struct Hp
{
	int s, f;	
};
bool cmp(Hp a, Hp b)
{
	//if (a.s < b.s) return true;
	if (a.f > b.f) return false;
	return true;
}
int main()
{
	int res = 0;
	int n;
	cin >> n;
	Hp h[n];
	for (int i = 0; i < n; i++)
		cin >> h[i].s >> h[i].f;
	sort(h, h + n, cmp);
	int x = h[0].s;
	for (int i = 0; i < n; i++)
	{
		if (x <= h[i].s)
		{
			res++;
			x = h[i].f;
		}
	}
	cout << res;
	return 0;
	
}
 
 

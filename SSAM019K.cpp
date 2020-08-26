#include<bits/stdc++.h>
using namespace std;
typedef long long lol;
int tong(lol a)
{
	int s = 0;
	while(a)
	{
		s += a % 10;
		a /= 10;
	}
	return s;
}
int ptach(lol a)
{
	int s = 0;
	lol i = 2;
	while(a > 1)
	{
		if (a % i == 0)
		{
			s += tong(i);	
			a /= i;
		}
		else i++;
	}
	return s;
}
void solve()
{
	lol a;
	scanf("%lld", &a);
	//int s = ptach(a);
	//cout << ptach(a) << ' ' << tong(a) << endl;
	if (ptach(a) == tong(a)) printf("YES\n");
	else printf("NO\n");
}
int main()
{
	solve();
	return 0;
}
 
 

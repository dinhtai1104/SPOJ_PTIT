#include<bits/stdc++.h>
using namespace std;
void solve()
{
	string h;
	cin >> h;
	int x;
	if (h.length() == 1) x = h[0] - '0';
	else x = (h[h.length() - 2] - '0') * 10 + h[h.length() - 1] - '0';
	if (x % 4) printf("0");
	else printf("4");
	printf("\n");
}
int main()
{
	int q;
	scanf("%d", &q);
	
	while(q--)
	{
		solve();
	}
	return 0;
}
 
 

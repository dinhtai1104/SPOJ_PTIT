#include<bits/stdc++.h>
using namespace std;
typedef long long lol;
lol fi[100];
void ham()
{
	fi[1] = 1; fi[2] = 1;
	for (int i = 3; i <= 92; i++)
	{
		fi[i] = fi[i - 1] + fi[i - 2];
	}
//	for (int i = 1; i <= 20; i++)
//	{
//		cout << fi[i] << endl;
//	}
}
void solve(lol k, int n)
{
	if (k == 1)
	{
		if (n % 2 == 0) printf("B");
		else printf("A");
	//	return;
	}
	else if (k > fi[n - 2])
	{
	//	n--;
		//k -= fi[n - 2];
		solve(k - fi[n - 2], n - 1);
	}
	else if (k <= fi[n - 2])
	{
		//n -= 2;
		solve(k, n - 2);
	}
}
int main()
{
	ham();
	int q;
	cin >> q;
	while(q--)
	{
		int n;
		lol i;
		cin >> n >> i;
		solve(i, n);
		printf("\n");
	}
	return 0;
}
 
 

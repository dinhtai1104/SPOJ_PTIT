#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9 + 7;
ll a[1000][1100];
void c()
    {
  //  if (k==0||k==n) return 1;
    for (int i=0;i<=1000 - 1;i++)
        for (int j=i;j<=1100 - 1;j++)
            if (i==0||i==j) a[i][j]=1;
            else a[i][j]=(a[i][j-1] % mod+a[i-1][j-1] % mod) % mod;
   // return a[k][n];
    }
int main()
{
	c();
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		cout << a[k][n] << endl;;
	}
	return 0;
}
 
 

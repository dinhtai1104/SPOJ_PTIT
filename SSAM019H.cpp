#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
struct MT
{
	long long a[2][2];
	MT()
	{
		a[0][0] = 0;
		a[0][1] = 1;
		a[1][0] = a[1][1] = 1;
	}
};
MT operator * (MT a, MT b)
{
	MT x;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			x.a[i][j] = 0;
			for (int k = 0; k < 2; k++)
			{
				x.a[i][j] = (x.a[i][j] + a.a[i][k]*b.a[k][j]) % mod;
			}
		}
	}
	return x;
}
MT powermod (MT a, long long n)
{
    if (n==1)
        return a;
    if (n%2!=0)
        return powermod(a,n-1)*a;
    MT tmp = powermod(a,n/2);
    return tmp*tmp;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		long long n;
		cin >> n;
		MT a;
		a = powermod(a, n);
		cout << a.a[0][1] << endl;
	}
	return 0;
}
 
 

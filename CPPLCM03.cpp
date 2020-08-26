#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long mod = 1e9+7;
long long fast(long long a, long long b)
{
	long long res = 1;
	while(b)
	{
		if (b&1) res = res * a % mod;
		b = b>>1; a = a*a%mod;
	}
	return res % mod;
}
void Solve()
{
	long long gcd, x;
	int n;
	cin >> n;
	vector<long long> a;
	a.resize(n);
	long long s = 1;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	gcd = a[0];
	for (int i = 0; i < n; i++)
	{
		gcd = __gcd(a[i], gcd);
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = fast(a[i], gcd);
	}
	for (int i = 0; i < n; i++)
	{
		s = s * a[i] % mod;
	}
	cout << s << endl;
}
 
int main(){
	int t;
	cin >> t;
	while(t--)
	{
		Solve();
	}
	return 0;
}
 

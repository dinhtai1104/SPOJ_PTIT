#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
const ll MAX = 1e6;
bool a[MAX];
vector<ll> heape;
 
void Sieve()
{
	heape.clear();
	ll n = sqrt(MAX);
	for (int i = 2; i <= n; i++)
	{
		for (int j = i * i; j < MAX; j += i)
			a[j] = true;
	}
	for (int i = 2; i <= MAX; i++)
	{
		if (!a[i]) heape.push_back(i);
	}
}
void Solve()
{
	ll n, s = 1;
	cin >> n;
	for (int i = 0; i < heape.size(); i++)
	{
		if (heape[i] > n) break;
		ll x = heape[i];
		while(heape[i] * x <= n)
		{
			x *= heape[i];	
		} 
		s *= x;
	}
	cout << s << endl;
}
int main(){	
	Sieve();
	int t;
	cin >> t;
	while(t--)
	{
		Solve();
	}
	return 0;
}
 

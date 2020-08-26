#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll a[100];
ll s[100];
vector<ll> x;
ll s2;
void update()
{
	ll s1 = 0;
	for (int i = 0; i < n; i++)
	{
		s2 += a[i];
		if (s[i] == 1)
		{
			s1 += a[i];
		}
	//	else s2 += a[i];
	}
	if (s1 != 0) x.push_back(s1);
	
}
int res = 0;
void TRY(int i)
{
	for (int j = 0; j < 2; j++)
	{
		s[i] = j;
		if (i == n - 1)
		{
			update();
		}
		else TRY(i + 1);
	}
	//return false;
}
bool check()
{
	for (ll i = 0; i < x.size() - 1; i++)
	{
		for (ll j = i + 1; j < x.size(); j++)
		{
			if (x[i] == x[j] && x[i] != s2) return true;
		}
	}
	return false;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		x.clear();
		cin >> n;
		ll s = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		TRY(0);
		if (check()) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
 
/*
 
	s1 + s2 = S
	s1 = s2 = S/2
 
*/ 

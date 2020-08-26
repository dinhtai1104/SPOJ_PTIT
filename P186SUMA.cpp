#include<bits/stdc++.h>
 
#define forn(i,n) for (i=0;i<n;++i)
#define for1(i,n) for (i=1;i<=n;++i)
#define fore(i,l,r) for (i=l;i<=r;++i)
#define ford(i,n) for (i=n-1;i>=0;--i)
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define mp make_pair
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	//freopen("input.txt","r",stdin);
	int n,m;
	cin>>n>>m;
	int a[n],i,j;
	bool exist = 0;
	vll sum;
	forn(i,n)
	{
		cin>>a[i];
		if(sum.empty()) sum.pb(a[i]);
		else sum.pb(sum.back()+a[i]);
		if(a[i]%m==0)
			exist = true;
	}
	if(exist)
	{
		cout<<"Yes";
		return 0;
	}
	if(sum.back()%m==0)
	{
		cout<<"Yes";
		return 0;
	}
	forn(i,n-1)
	{
		fore(j,i+1,n-1)
		{
			if((sum[j] - sum[i])%m==0)
			{
				cout<<"Yes";
				return 0;
			}
		}
	}
	cout<<"No";
	return 0;
} 

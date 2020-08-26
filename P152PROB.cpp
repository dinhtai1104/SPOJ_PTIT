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
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
 
 
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	//freopen("input.txt","r",stdin);
	int n,k;
	cin>>n>>k;
	int a[n],i;
	forn(i,n)
		cin>>a[i];
	sort(a,a+n,greater<int>());
	i=0;
	int res=0,check[n]={0};
	while(i<n-1)
	{
		if(abs(a[i]-a[i+1])<=k)
		{
			res++;
			while(abs(a[i]-a[i+1])<=k && i<n-1)
				{
					i++;
					check[i]=1;
					check[i+1]=1;
				}
			i++;
		}
		else
		{
			res++;
			check[i]=1;
			i++;
		}
	}
	if(check[n-1]==0) res++;
	cout<<res;
	return 0;
}
  

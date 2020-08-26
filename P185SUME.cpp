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
	int n;
	cin>>n;
	int i,median,temp;
	vi a;
	forn(i,n)
	{
		cin>>temp;
		a.pb(temp);
	}
	sort(all(a));
	int begin = a[0], end = a[n-1];
	fore(i,begin,end)
	{
		int x = abs(a[0]-i),flag=1;
		auto t = a;
		for(auto j:t)
		{
			if(j<i)
				j+=x;
			else if(j>i)
				j-=x;
			if(j!=i)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}  

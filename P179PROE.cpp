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
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	//freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	int a[n],i,counter = 0;
	vector<double> resA,resB,resDis;
	long long sum = 0,total = 0;
	forn(i,n)
	{
		cin>>a[i]; 
		total+=a[i];
	}
	sort(a,a+n,greater<int>());
	for(auto i:a)
	{
		counter++;
		sum+=i;
		double tempA = counter*100.0/n,tempB = sum*100.0/total;
		resA.pb(tempA);
		resB.pb(tempB);
		resDis.pb(fabs(tempB - tempA));
	}
	int index = max_element(all(resDis)) - resDis.begin();
	cout<<setprecision(1)<<fixed;
	cout<<resA[index]<<" "<<resB[index];
	return 0;
} 

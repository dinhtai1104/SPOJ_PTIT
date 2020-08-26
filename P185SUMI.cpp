#include<bits/stdc++.h>
 
#define forn(i,n) for (i=0;i<n;++i)
#define for1(i,n) for (i=1;i<=n;++i)
#define fore(i,l,r) for (i=l,i<=r;++i)
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
	vi resIn, resOut;
	int j,temp,i;
	forn(j,n)
	{
		cin>>temp;
		vi number,root;
		int t = temp;
		for(i=2;i*i<=t;i++)
		{
			if(t%i==0)
			{
				int counter=0;
				while(t%i==0)
				{
					t/=i;
					counter++;
				}
				number.pb(i);
				root.pb(counter);
			}
		}
		if(t!=1)
		{
			number.pb(t);
			root.pb(1);
		}
		int out = 1, in = temp,j;
		forn(i,number.size())
		{
			if(root[i]%2==0)
			{
				out*=sqrt(pow(number[i],root[i]));
				in/=pow(number[i],root[i]);
			}
			else
			{
				out*=sqrt(pow(number[i],root[i]-1));
				in/=pow(number[i],root[i]-1);
			}
		}
		resOut.pb(out);
		resIn.pb(in);
	}
	forn(i,resIn.size())
		cout<<resOut[i]<<" "<<resIn[i]<<endl;
	return 0;
}  

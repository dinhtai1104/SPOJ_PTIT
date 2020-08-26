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
	string s;
	cin>>s;
	int i,n=s.length();
  long long counter=0;
	forn(i,n)
		if(s[i]=='4' || s[i]=='8' || s[i]=='0') counter++;
	forn(i,n-1){
		int h=(s[i]-'0')*10+ (s[i+1]-'0');
		if(h%4==0)
			counter+=(i+1);
	}
	cout<<counter;
	return 0;
} 

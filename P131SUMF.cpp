#include<bits/stdc++.h>
 
#define forn(i,n) for(i=0;i<n;++i)
#define for1(i,n) for(i=1;i<=n;++i)
#define fore(i,l,r) for(i=l;i<=r;++i)
#define ford(i,n) for(i=n-1;i>=0;--i)
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
	int r,c;
	cin>>r>>c;
	int i;
	vector<string> a,column;
	string temp;
	forn(i,r)
	{
		cin>>temp;
		a.pb(temp);
	}
	forn(i,c)
	{
		string t = "";
		for(auto j:a)
			t+=j[i];
		column.pb(t);
	}
	int counter = 0;
	while(1)
	{
		bool flag = 1;
		for(auto &i:column)
			i = i.substr(1);
		sort(all(column));
//		for(auto i:column)
//			cout<<i<<" ";
//		cout<<endl;
		forn(i,c-1)
			if(column[i]==column[i+1])
				{
					flag = 0;
					break;
				}
		if(counter >= r || flag == 0) break;
		counter++;
	}
	cout<<counter;
	return 0;
} 

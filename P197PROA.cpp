#include<bits/stdc++.h>
 
#define lmao cout<<"\nLick My Ass onii-chann ~";
#define alpha "abcdefghijklmnopqrstuvwxyz"
#define ALPHA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define fi first
#define se second
#define pb push_back
 
using namespace std;
 
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
 
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int nmax = 2e5+5;
 
int n;
int a[nmax];
int s;
ll res = 0;
 
void solve(){
	cin>>n>>s;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	if (a[n/2] == s) {
		cout<<res;
	}
	else if (a[n/2]<s){
		for(int i=n-1;i>=n/2;i--){
			if(a[i] >= s) continue;
			res+=abs(a[i]-s);
		}	
		cout<<res;
	}
	else{
		for (int i=0;i<=n/2;i++){
			if(a[i] <= s) continue;
			res+=abs(a[i]-s);
		}
		cout<<res;
	}
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	solve();
 
return 0;
} 

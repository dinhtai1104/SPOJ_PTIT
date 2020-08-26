#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define get(n) ll n; cin>>n
#define getStr(s) string s;cin>>s;
#define getStrs(s) string s;getline(cin,s);
#define set_arr(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define sort_arr(a,n) stable_sort(a,a+n)
#define sort_vect(a) stable_sort(a.begin(),a.end())
#define btSpeed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
	get(n); get(k); 
	getStr(s);
	ll res = 0;
	ll a[26] = {};
	for (int i=0;i<s.length(); i++) {
		a[s[i] - 'A']++;
	}
	sort(a, a+26, greater<ll>());
	for (int i=0;i<26; i++) {
		if (a[i] <= k) {
			k -= a[i];	
			res+=a[i]*a[i];
		} else {
			res += k*k;
			break;
		}
		
	}
	cout<<res;
	
}
int main(){
	int t=1;
	//cin >> t;
	while(t--) {
		solve();
	}
 
	return 0;
}
 
 
 
 
 

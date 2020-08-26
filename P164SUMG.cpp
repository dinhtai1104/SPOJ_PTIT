#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
	string a;
	ll res=26;
	cin>>a;
	int dem[26]={};
	for(int i=0;i<a.length();i++){
		res+=25;
	}
	cout<<res;
}
int main(){
	int t;
	t=1;
	while(t--) {
		solve();
	}
 
	return 0;
}
 
 

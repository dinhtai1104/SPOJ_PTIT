#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
int a[100005] = {};
void solve() {
	cin>>s;
	int tmp=0;
	for (int i = 0; i < s.length()-1; i++) {
		if (s[i]==s[i+1]){
			a[i+1]+=a[i]+1;
		}else {
			a[i+1] = a[i];
		}
	}
	int len = s.length();
//	if (s[len - 1] == s[len-2])a[s.length()] = tmp+1;
//	else a[len] = tmp;
	//a[len] = tmp;
	
	// for (int i = 1; i <= s.length(); i++) {
	// 	cout<<a[i]<<' ';
	// }
	// cout<<endl;
	int m,l,r;
	cin>>m;
	while(m--) {
		cin>>l>>r;
		cout<<a[r-1]-a[l-1]<<'\n';
	}
}
int main(){
	int t = 1;
//	cin >> t;
	while(t--) {
		solve();
	}
 
	return 0;
}
 
 

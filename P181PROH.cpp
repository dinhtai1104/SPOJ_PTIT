#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
	ll a,b;
	cin>>a>>b;
	ll x = a - b, cnt=0;
	if (a == b) cout<<"infinity";
	else  if (a < b) {
		cout<<0;	
	} else {
	for(int i=1;i<=sqrt(x);i++){
		if (x%i==0){
			if (i > b)cnt++;
			if (i != x/i) {
				if(x/i > b)cnt++;
			}
		}
	}
	cout << cnt;
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
 
 

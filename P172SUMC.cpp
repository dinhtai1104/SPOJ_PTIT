#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
	ll n;
	cin>>n;
	if (n == 0) {
		cout << 1;
		return;
	}
	n %= 4;
	if (n == 1) {
		cout << 8;
	}
	if (n == 2) {
		cout << 4;
	}
	if (n == 3) {
		cout << 2;
	}
	if (n == 0) {
		cout << 6;
	}
	
}
int main(){
	int t = 1;
	while(t--) {
		solve();
	}
 
	return 0;
}
 
 

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
bool giaiPT(ll a) {
	// x * (x + 1) = a * 2;
	ll delta = 1 + 8 * a;
	double x = 1.0*(-1 + sqrt(delta))/2;
	if (x == (ll)x && x >= 1) {
		return true;
	}
	return false;
}
void solve(){
	cin>>n;
	int x = 1;
	ll res = 1;
	while(res <= 1e9) {
		res = x *(x+1)/2;
		ll res1 = n - res;
		if (giaiPT(res1)) {
			cout << "YES";
			return;
		}
		x++;
	}
	cout << "NO";
}
int main(){
	int t=1;
	while(t--) {
		solve();
	}
 
	return 0;
}
 
 

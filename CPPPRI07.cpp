#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
	int n, numdiff = 0;
	cin >> n;
	for (int i = 2; i < n; i++) {
		int cnt = 0;
		while(n % i == 0) {
			cnt++;
			n /= i;
		}
		if (cnt == 1) {
			numdiff++;
		}
		else if (cnt > 1) {
			cout << 0 << endl;
			return;
		}
	}
	if (n != 1) {
		numdiff++;
	}
	if (numdiff == 3) {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
 
	return 0;
}
 
 

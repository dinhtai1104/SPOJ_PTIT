#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
	int n,res;
	cin>>n;
	vector<int>a(n+1);
	for(int i=0;i<n;i++) cin>>a[i];
	int aMax=a[0], aMin=a[0], vtMax = 0, vtMin = 0;
	for(int i=0;i<n;i++) {
		if(aMax<a[i]) {
			aMax = a[i];
			vtMax = i;
		}
		if(aMin>=a[i]) {
			aMin = a[i];
			vtMin = i;
		}
	}
	if (vtMin < vtMax) {
		vtMin++;
	}
	cout<<vtMax + n - vtMin - 1;
	
}
int main(){
	int t=1;
//	cin >> t;
	while(t--) {
		solve();
	}
 
	return 0;
}
 
 

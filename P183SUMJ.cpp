#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
	int n,k;
	cin>>n>>k;
	int a[n],b[k],dd[100]={};
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	for (int i=0;i<k;i++) {
		cin>>b[i];
		dd[b[i]]++;
	}
	for (int i = 0; i < n;i++) {
		if (dd[a[i]]) {
			cout << a[i] << ' ';
			dd[a[i]]=0;
		}
	}
}
int main(){
	int t=1;
	while(t--) {
		solve();
	}
 
	return 0;
}
 
 

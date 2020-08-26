#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
	int n;
	cin>>n;
	char a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int res=0;
	for(int i=0;i<n;i++){
		int tmp=0;
		for(int j=0;j<n;j++){
			if(a[i][j]=='C') {
				tmp++;
			}
		}
		res+=(tmp)*(tmp-1)/2;
	}
	for(int j=0;j<n;j++){
		int tmp=0;
		for(int i=0;i<n;i++){
			if(a[i][j]=='C'){
				tmp++;
			}
		}
		res+=tmp*(tmp-1)/2;
	}
	cout<<res;
}
int main(){
	int t=1;
//	cin >> t;
	while(t--) {
		solve();
	}
 
	return 0;
}
 
 

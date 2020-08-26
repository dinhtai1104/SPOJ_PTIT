#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void FixedUpdate(){
	int dp[100001]={};
	dp[0]=1;
	int n,k;
	cin>>n>>k;
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=min(i,k);j++){
			dp[i]+=dp[i-j];
			dp[i]%=(ll)(1e9+7);
		}
	}
	cout<<dp[n]<<'\n';
}
int main(){
	cin.tie(0);
	cout.tie(0);
	int t=1;
	cin >> t;
	while(t--) {
		FixedUpdate();
	}
 
	return 0;
}
 
 
 
 
 

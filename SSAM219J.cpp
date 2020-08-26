#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum[200005];
ll binsearch(ll a[],ll l,ll r,ll x,ll gt){
	while(l<=r){
		ll mid =(l+r)/2;
		if(gt-a[mid]<x){
			r = mid-1;
		}
		else if(gt-a[mid]==x){
			return mid;
		}
		else{
			l = mid+1;
		}
	}
	return -1;
}
int main(){
	ll test;
	cin>>test;
	while(test--){
		memset(sum,100003,0);
		ll n,s;
		cin>>n>>s;
		for(ll i = 1;i<=n;i++){
			ll x;
			cin>>x;
			sum[i] = sum[i-1]+x;
		}
		if(sum[n]<s) cout<<"NO"<<endl;
		else if(sum[n]==s) cout<<"YES"<<endl;
		else{
			bool check = false;
			for(ll i = 1;i<=n;i++){
				if(sum[i]<s) continue;
				else if(sum[i]==s){
					check = true;
					break;
				}
				else{
					if(binsearch(sum,1,i-1,s,sum[i])!=-1){
						check = true;
						break;
					}
				}
			}
			if(check==true) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
} 

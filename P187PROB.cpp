#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 2*1e6+10;
vector<bool>isPr(MAX, true);
vector<int>pr;
void sieve() {
	isPr[0]=isPr[1]=false;
	for(int i=2;i<=sqrt(MAX);i++){
		if(isPr[i]==true){
			for(int j=i*i;j<MAX;j+=i){
				isPr[j]=false;
			}
		}
	}
	for(int i=2;i<MAX;i++){
		if(isPr[i]) pr.push_back(i);
	}
}
int minPrime[MAX+10];
 
void solve(){
	for (int i = 2; i * i <= MAX; ++i) {
	    if (minPrime[i] == 0) { //if i is prime
	        for (int j = i * i; j < MAX; j += i) {
	            if (minPrime[j] == 0) {
	                minPrime[j] = i;
	            }
	        }
	    }
	}
	for (int i = 2; i < MAX; ++i) {
	    if (minPrime[i] == 0) {
	        minPrime[i] = i;
	    }
	}
	int t=0,n;
	ll res=0;
	cin>>t;
	while(t--) {
		cin>>n;
		while(n!=1){
			res+=minPrime[n];
			n/=minPrime[n];
		}
 
//		cout<<tmp<<'\n';
	}
	cout<<res<<endl;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t=1;
//	cin >> t;
	while(t--) {
		solve();
	}
 
	return 0;
}
 
 

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define get(n) ll n; cin>>n
#define set(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define sort(a,n) sort(a,a+n)
ll mod=100000001;
ll nhan(ll a, ll b) {
	if (b==0)return 0;
	if(b==1) return a%mod;
	ll tmp=nhan(a,b/2)%mod;
	tmp=(tmp+tmp)%mod;
	if (b%2==0)return tmp%mod;
	else return (a+tmp)%mod;
}
ll power(ll a, ll b) {
	if (b==0)return 1%mod;
	if (b==1) {
		return a%mod;
	} 
	ll tmp=power(a,b/2)%mod;
	tmp=(tmp*tmp)%mod;
	if(b%2==0){
		return tmp%mod;
	} else {
		return a*tmp%mod;
	}
} 
static int test=1;
void solve(){
	get(n);
	cout<<"Case "<<test++<<": ";
	if(n==0){
		cout<<1<<' '<<0<<endl;
		return;
	}
	ll thuan, nghich;
	thuan=power(2,n);
	nghich=power(2,n)-1;
	cout<<thuan*(thuan+1)/2 %mod	<<' '<<nghich*(nghich+1)/2 %mod<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}
 
	return 0;
}
 
 
 

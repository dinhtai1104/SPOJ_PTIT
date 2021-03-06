#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
const int L=3000000;
const int mod=1e9+7;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    long long n,m,k,ans=0,res=0;
    cin>>n>>m;
    k=min(n,m);
    for(int i=1;i<=L;i++){
        long long r=n/i,l=n/(i+1);
        l++;
        if(r==0) break;
        if(l>k) continue;
        r=min(r,k);
        long long a=n%l+n%r,b=(r-l+1);
        if(a%2==0) {
            ans=(ans+(a/2)%mod*(b%mod))%mod;
        }
        else ans=(ans+(b/2)%mod*(a%mod))%mod;
    }
    k=min(k,n/(L+1));
    for(int i=1;i<=k;i++) ans=(ans+n%i)%mod;
    if(m>n){
        ans=(ans+n%mod*((m-n)%mod)%mod)%mod;
    }
    cout<<ans<<endl;
}
 

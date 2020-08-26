#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll n;
	scanf("%lld",&n);
	ll a[n];
	for(int i=0;i<n;i++)scanf("%lld",&a[i]);
	ll cnt=0;
	sort(a,a +n);
	for(int i=0;i<n;i++){
		if(a[i]==a[2])cnt++;
	}
	if (a[0]==a[2])printf("%lld",cnt*(cnt-1)*(cnt-2)/6);
	else if(a[0]==a[1] && a[0]!= a[2]) printf("%lld",cnt);
	else printf("%lld",cnt*(cnt-1)/2);
	return 0;
}
 
  

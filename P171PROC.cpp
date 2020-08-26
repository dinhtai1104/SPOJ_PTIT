#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll n,L;
	cin>>n>>L;
	ll a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	ll result = 2*max(a[0], L-a[n-1]);
	for(int i=1;i<n;i++){
		result=max(result,a[i]-a[i-1]);
	}
	printf("%.10lf", (double)result/2);
	return 0;
}
 
  

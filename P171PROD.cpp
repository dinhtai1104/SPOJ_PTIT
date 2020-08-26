#include<bits/stdc++.h>
using namespace std;
pair <long long,long long> a[100005];
int main()
{
	long long n;
	cin>>n;
	for(long long i = 0;i<n;i++){
		cin>>a[i].first>>a[i].second;
	}
	sort(a,a+n);
	long long dem = 0;
	long long nbegin = 0;
	for(long long i = 0;i<n;i++){
		if(i==0 || a[i].second > a[nbegin].second) nbegin = i;
		if(a[nbegin].second>a[i].second) dem++;
	}
	printf("%lld",dem);
	return 0;
}
 
 

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	long a[n];
	for (i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	if(n%2==0) cout<<a[n/2-1];
	else cout<<a[n/2];
} 

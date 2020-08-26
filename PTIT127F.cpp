#include <iostream>
using namespace std;
 
int main() {
	
	// your code here
	int n;cin>>n;int a[n];
	int x=n,i;
	for(i=0;i<n;i++)cin>>a[i];
	long long cnt=0;
	for(i=n-1;i>=0;i--){if(a[i]==x)x--;else cnt++;}
	cout<<cnt;
	return 0;
} 

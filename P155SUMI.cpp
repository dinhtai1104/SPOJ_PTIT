#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[m],i;
	for (i=0;i<m;i++) cin>>a[i];
	sort(a,a+m);
	int min=1000;
	for (i=0;i<m-n+1;i++)
		if(abs(a[i]-a[i+n-1])<min)min=abs(a[i]-a[i+n-1]);
	cout<<min;
}  

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,f;
	cin>>n>>f;
	long k[n],l[n],i;
	long long c[n],sp=0;
	for (i=0;i<n;i++)
	{
		cin>>k[i]>>l[i];
		sp+=min(k[i],l[i]);
		c[i]=min(2*k[i],l[i])-min(k[i],l[i]);
	}
	sort(c,c+n,greater<long long>());
	for (i=0;i<f;i++) sp+=c[i];
	cout<<sp;
} 

#include<bits/stdc++.h>
 
#define Thanh_Cong cout<<" You can call me: coder hihi ";
 
using namespace std;
 
#define pub push_back
 
#define LL long long
#define L  long
#define ULL unsigned long long
 
const long long M= 1e9+7;
const double pi = acos(-1);
const long limit=2e5+5;
 
int n;
long long x,a[limit];
 
int main()
{
	ios_base::sync_with_stdio(0);
 
	cin>>n;
	a[0]=0;
	cin>>x;
	a[n-1]=x;
	for(int i=1;i<n/2;i++)
	{
		cin>>x;
		a[i]=a[i-1];
		a[n-i-1]=x-a[i];
		while(1)
		{
			a[n-i-1]=x-a[i];
			if(a[n-i-1]<=a[n-i]) break;
			else a[i]++;
		}
	}
 
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
 
	return 0;
} 

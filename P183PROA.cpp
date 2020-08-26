#include<iostream>
using namespace std;
int Round(float a)
{
	if(a-int(a)>=0.5) return int(a)+1;
	return int(a);
}
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n],i,dem=0;
	float tong=0;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		tong+=a[i];
	}
	if(Round(tong/n)>=k) cout<<10;
	else
		{
			while(1)
			{
				tong+=k;
				dem++;
				n++;
				if(Round(tong/n)>=k) break;
			}
			cout<<dem;
		}
 
} 

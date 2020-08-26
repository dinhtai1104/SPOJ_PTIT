#include<iostream>
using namespace std;
int main()
{
	int n,i,j,d1bd=0,d1max,d1,d0,k,d1s;
	cin>>n;
	int a[n];
	for (i=0;i<n;i++) 
	{
		cin>>a[i];
		if(a[i]==1) d1bd++;
   }
	d1max=d1bd;
	if(d1bd==n) cout<<d1bd-1;
	else
	{
		for (i=0;i<n;i++)
		{
			for (j=i;j<n;j++)
			{
					d1s=0;
			        d0=0;
			    for (k=i;k<=j;k++)
			   {
				if(a[k]==0) d0++;
				else d1s++;
		       }
			if(d0-d1s+d1bd>d1max) d1max=(d0-d1s+d1bd);
			}
		}
		cout<<d1max;
	}
	return 0;
} 

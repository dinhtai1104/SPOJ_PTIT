#include<iostream>
#include<math.h>
using namespace std;
int ktcp(long long n)
{
	long long k=sqrt(n);
	if(k*k==n) return 1; else return 0;
}
int main()
{
	int t,k;
	cin>>t;
	for (k=0;k<t;k++)
	{
		long long x,i,dem=0,j;
		cin>>x;
		for (i=1;i<sqrt(x);i++)
		{
			if(ktcp(x-pow(i,2))==1) 
			{
				bool flag=true;
				for (j=1;j<i;j++) if(sqrt(x-pow(i,2))==j)
				{
					flag=false;
					break;
				}
				if(flag==true) 
					dem++;
			}
		}
		if(ktcp(x)==1) dem++;
		cout<<dem<<endl;
	}
} 

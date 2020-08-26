#include<iostream>
#include<cmath>
using namespace std;
 
long *a;
 
void nhap()
{
	a=new long[2];
	for(int i=0; i<2; i++)
	{
		cin>>a[i];
	}
}
void min()
{
 
	for(int i=0; i<2; i++)
	{
		int temp=a[i];
		int dem=0;
		while(temp>0)
		{
			if(temp%10==6)
				a[i]=a[i]-pow(10,dem);
			dem++;
			temp/=10;
		}	
	}
	cout<<a[0]+a[1]<<" ";
}
void max()
{
		for(int i=0; i<2; i++)
	{
		int temp=a[i];
		int dem=0;
		while(temp>0)
		{
			if(temp%10==5)
				a[i]=a[i]+pow(10,dem);
			dem++;
			temp/=10;
		}	
	}
	cout<<a[0]+a[1];
}
void xuly()
{
	
}
int main()
{
	nhap();
	min();
	max();
	delete[]a;
} 

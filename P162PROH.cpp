#include<iostream>
using namespace std;
int main()
{
		int x,dem=0;
	cin>>x;
	if(x==1) 
	{
		cout<<1;
		return 0;
	}
	int d=1,d1=1,i=1;
	while(d<=x)
	{
		dem++;
		d=d1+i;
		d1=d;
		x-=d;
		i++;
	}
	cout<<dem;
	return 0;
} 

#include<iostream>
using namespace std;
int main()
{
		int i,j,min,n;
	cin>>n;
	bool flag=false;
	for (i=0;i<=(n/5);i++)
	  {
	  	for (j=0;j<=(n/3);j++)
	    if((5*i+3*j)==n)
	    {
	    	flag=true;
	    	min=i+j;
	    	break;
		}
	  }
	for (i=0;i<=(n/5);i++)
	  {
	  for(j=0;j<=(n/3);j++)
	     if((5*i+3*j)==n && (i+j)<=min)
	     {
	     	flag=true;
	     	min=i+j;
		 }}
	if(flag==false) cout<<"-1";
	else cout<<min;
	return 0;
} 

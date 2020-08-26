#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,k;
	cin>>t;
	for (k=0;k<t;k++)
	{
		long long n,i,dem=0;
		cin>>n;
		for (i=2;i<sqrt(n);i++) 
		{
			if(n%i==0) 
			 {
			 	if(i%2==0 && (n/i)%2==0 && i!=(n/i)) dem+=2;
			 	else if((i%2==0 && (n/i)%2!=0)||(i%2!=0 && (n/i)%2==0)) dem++;
			 	
			 }
		}
		float k=sqrt(n);
		if(int(k)==k && int(k)%2==0) dem++;
		if(n%2==0) dem++;
		cout<<dem<<endl;
	}
} 

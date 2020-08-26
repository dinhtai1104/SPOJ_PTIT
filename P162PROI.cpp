#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
		int n;
	cin>>n;
	if(n>0) cout<<n;
	else
	{
		int tam=n;
		n=abs(n);
		int j,k;
		j=n%10;
		n/=10;
		k=n%10;
		if(j>k) cout<<((tam+j)/10)<<endl;
		else cout<<(tam/10)+k<<endl;
	}
	return 0;
} 

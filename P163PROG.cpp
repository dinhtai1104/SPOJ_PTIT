#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n, x;
	cin>>n>>x;
	long d = 0;
	for(int i = 1 ; i <= n ; i ++)
	{
		long temp = x;
		if(temp%i==0)
		{
			temp/=i;
			if(temp<=n) d++;
		}
	}
	cout<<d;
 
 
 
 
 
	return 0;
} 

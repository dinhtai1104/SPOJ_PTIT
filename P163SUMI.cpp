#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	i=1;
	int num=1;
	string res="";
	while(i<=n)
	{
		res+=to_string(num);
		num++;
		i++;
	}
	cout<<res[n-1];
	return 0;
} 

#include <iostream>
using namespace std;
 
int main ()
{
	int n;
	cin>>n;
	int arr[3002];
	for (int i=1; i<=3000; i++)
	{
		arr[i]=0;
	}
 
	int x;
	for (int i=0; i<n; i++)
	{
		cin>>x;
		arr[x]++;
	}
	for (int i=1; i<=n; i++)
	{
		if (arr[i]==0)
		{
			cout<<i;
			return 0;
		}
	}
	cout<<n+1;
	return 0;
} 

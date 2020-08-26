#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 
    ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	long a[n],i,max1,min1,max_difference;
	for (i=0;i<n;i++) cin>>a[i];
	max_difference=0;
	min1=a[0];
	max1=a[0];
	for (i=1;i<n;i++)
	{
		if(a[i]<min1)
		{
			min1=a[i];
			max1=a[i];
		}
		else
		{
			max1=max(a[i],max1);
			max_difference=max(max1-min1,max_difference);
		}
	}
	cout<<max_difference;
} 

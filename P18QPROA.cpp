#include<iostream>
using namespace std;
int test(int n)
{
		int i;
		int d=0;
		for(i=1;i*i<n;i++)
		{
			if(n%i==0)
			{
				if(i%2==0) d++;
				if(n%(2*i)==0) d++;
			}
		}
		if(i*i==n)
		{
			if(i%2==0) return d+1;
		}
		return d;
}
int main()
{
	int t;
	long n;
	cin>>t;
	while(t)
	{
		cin>>n;
		cout<<test(n);
		cout<<"\n";
		t--;
	}
	return 0;
} 

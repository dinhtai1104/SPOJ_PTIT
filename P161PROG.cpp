#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
 
int ktcp (long long x)
{
	long long so=sqrt(x);
	if (so*so==x) return 1;
	else return 0;
}
 
int kt (long long x)
{
	for (long long i=1; i<=sqrt(x); i++)
	{
		if (x%i==0)
		{
			if (ktcp(i)==1 && sqrt(i)>1) return 0;
			if (ktcp(x/i)==1 && sqrt(x/i)>1) return 0;
		}
	}
	return 1;
}
 
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n;
	cin>>n;
	vector <long long> uoc;
	for (long long i=1; i<=sqrt (n); i++)
	{
		if (n%i==0)
		{
			if (i!=sqrt (n))
			{
				uoc.push_back(i);
				uoc.push_back(n/i);
			}
			else
			{
				if (ktcp(n)==1)
				{
					uoc.push_back(i);
				}
				else
				{
					uoc.push_back(i);
					uoc.push_back(n/i);
				}
			}
		}
	}
	sort (uoc.begin(), uoc.end());
	for (long long i=uoc.size()-1; i>=0; i--)
	{
		if (kt(uoc[i])==1)
		{
			cout<<uoc[i];
			break;
		}
	}
	return 0;
} 

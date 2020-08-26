#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
 
long long a, b;
vector <long long> uocA;
vector <long long> uocB;
 
void khoitaoUocA (long long n)
{
	if (sqrt (n)*sqrt (n)==n) uocA.push_back(sqrt(n));
	for (int i=1; i<sqrt (n); i++)
	{
		if (n%i==0)
		{
			uocA.push_back(i);
			uocA.push_back(n/i);
		}
	}
}
 
void khoitaoUocB (long long n)
{
	if (sqrt (n)*sqrt (n)==n) uocB.push_back(sqrt(n));
	for (int i=1; i<sqrt (n); i++)
	{
		if (n%i==0)
		{
			uocB.push_back(i);
			uocB.push_back(n/i);
		}
	}
}
 
int main ()
{
	cin>>a>>b;
	if (a==b) cout<<"0";
	else
	{
		khoitaoUocA (a);
		khoitaoUocB (b);
		int kq=2000000;
		for (int i=uocB.size()-1; i>=0; i--)
		{
			for (int j=uocA.size()-1; j>=0; j--)
			{
				if (uocB[i]==uocA[j])
				{
					long long p1=uocB[i];
					long long p2=uocA[j];
					long long p1c=b/p1;
					long long p2c=a/p2;
 
					int demB1=0;
					while (1)
					{
						if (p1c%5==0)
						{
							p1c=p1c/5;
							demB1++;
						}
						else if (p1c%3==0)
						{
							p1c=p1c/3;
							demB1++;
						}
						else if (p1c%2==0)
						{
							p1c=p1c/2;
							demB1++;
						}
						else break;
					}
					int demB2=0;
					while (1)
					{
						if (p2c%5==0)
						{
							p2c=p2c/5;
							demB2++;
						}
						else if (p2c%3==0)
						{
							p2c=p2c/3;
							demB2++;
						}
						else if (p2c%2==0)
						{
							p2c=p2c/2;
							demB2++;
						}
						else break;
					}
					if (p1c==1 && p2c==1) kq = min (kq, demB1+demB2);
					break;
				}
			}
		}
		if (kq==2000000) cout<<"-1";
		else cout<<kq;
	}
 
	return 0;
} 

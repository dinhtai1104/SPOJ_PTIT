#include <iostream>
using namespace std;
 
int main ()
{
	long long n;
	long long F1, F2;
	cin>>F1>>F2;
	cin>>n;
	if (n%6==0) n=6;
	else n=n%6;
	long long Fn;
	for (long long i=3; i<=n; i++)
	{
		Fn=(F2-F1)%1000000007;
		F1=F2;
		F2=Fn;
	}
	long long KQ;
	if (n==1) KQ=F1%1000000007;
	else if (n==2) KQ=F2%1000000007;
	else KQ=Fn;
	if (KQ<0) cout<<KQ+1000000007;
	else cout<<KQ;
	return 0;
} 

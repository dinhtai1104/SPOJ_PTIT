#include <iostream>
using namespace std;
 
int main ()
{
	int n;
	cin>>n;
	int MinUp=50005;
	int MinDown=50005;
	int SumU=0;
	int SumD=0;
	for (int i=1; i<=n; i++)
	{
		int a, b;
		cin>>a>>b;
		SumU+=a;
		SumD+=b;
		if (a<MinUp) MinUp=a;
		if (b<MinDown) MinDown=b;
	}
	SumU+=MinDown;
	SumD+=MinUp;
	if (SumU<SumD) cout<<SumD;
	else cout<<SumU;
	return 0;
} 

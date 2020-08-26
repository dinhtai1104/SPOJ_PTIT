#include <iostream>
using namespace std;
 
int main ()
{
	int n;
	cin>>n;
	for (int i=1; i<=n; i++)
	{
		float goc;
		cin>>goc;
		float canh = 2.0/(1.0-(goc/180.0));
		int ep = canh;
		if (ep*1000==canh*1000) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
} 

#include<iostream>
#include<math.h>
using namespace std;
int ktnt(int n)
{
	int i;
	if(n==1) return 0;
	for (i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
	return 1;
}
int ucln(int a, int b)
{
	while(a!=0 && b!=0) if(a>b) a-=b; else b-=a;
	if(a==0) return b; else return a;
}
int main()
{
	int t;
	cin>>t;
	for (int k=0;k<t;k++)
	{
		int n;
		cin>>n;
		int dem=0,i;
		for (i=1;i<=n;i++) if(ucln(n,i)==1) dem++;
		cout<<ktnt(dem)<<endl;
	}
	return 0;
} 

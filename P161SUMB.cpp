#include <iostream>
#include <vector>
using namespace std;
 
int ucln (int a, int b)
{
	while (b!=0)
	{
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
 
int main ()
{
	int n, m;
	cin>>n>>m;
	vector <int> P;	//P[]={};
	vector <int> Q;	//Q[]={};
	int hs;
	for (int i=0; i<=n; i++)
	{
		cin>>hs;
		P.push_back(hs);
	}
	for (int i=0; i<=m; i++)
	{
		cin>>hs;
		Q.push_back(hs);
	}
	if (n>m)
	{
		if (P[0]*Q[0]>0) cout<<"Infinity";
		else cout<<"-Infinity";
	}
	else if (n<m)
	{
		cout<<"0/1";
	}
	else
	{
		int cs=ucln (P[0], Q[0]);
		if ((Q[0]<0 && cs>0) || (Q[0]>0 && cs<0))
		{
			cs=cs*-1;
			cout<<(P[0]/cs)<<"/"<<(Q[0]/cs);
		}
		else
		{
			cout<<(P[0]/cs)<<"/"<<(Q[0]/cs);
		}
	}
	return 0;
} 

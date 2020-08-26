#include <iostream>
using namespace std;
 
int dd[126];
void khoitao ()
{
	for (int i=97; i<=122; i++)
	{
		dd[i]=0;
	}
}
 
int ktPalinFake (int arr[])
{
	int demLe=0;
	int demChan=0;
	for (int i=97; i<=122; i++)
	{
		if (arr[i]%2==0) demChan++;
		else demLe++;
	}
	if (demLe>=4) return 0;
	else return 1;
}
 
int main ()
{
	int t;
	cin>>t;
	string xau;
	for (int k=1; k<=t; k++)
	{
		khoitao();
		cin>>xau;
		for (int i=0; i<xau.length(); i++)
		{
			int so=xau[i]-0;
			dd[so]++;
		}
		if (ktPalinFake (dd)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
 
	return 0;
} 

#include<iostream>
using namespace std;
void stringtoarray(string s, int a[])
{
	for (int i=0;i<s.length();i++) a[i]=s[i]-48;
}
void sapxep(int a[], int n)
{
	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		 if(a[i]<a[j])
		 {
		 	int tam;
		 	tam=a[i];
		 	a[i]=a[j];
		 	a[j]=tam;
		 }
	}
}
string arraytostring(int a[], int n)
{
	string b="";
	for (int i=0;i<n;i++)
	{
		b+=(char)(a[i]+48);
	}
	return b;
}
int main()
{
	int t;
	cin>>t;
	for (int k=0;k<t;k++)
	{
		int n,i;
		string s;
		cin>>n;
		cin>>s;
		string b="";
		for (i=0;i<n;i++)
		{
			if((s[i]-48)==2) b+="2";
			else if((s[i]-48)==3) b+="3";
			else if((s[i]-48)==4) b+="322";
			else if((s[i]-48)==5) b+="5";
			else if((s[i]-48)==6) b+="53";
			else if((s[i]-48)==7) b+="7";
			else if((s[i]-48)==8) b+="7222";
			else if((s[i]-48)==9) b+="7332";
		}
		int t=b.length();
		int a[t];
		stringtoarray(b,a);
		sapxep(a,t);
		string l=arraytostring(a,t);
		cout<<l<<endl;
	}
} 

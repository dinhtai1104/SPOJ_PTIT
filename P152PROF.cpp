#include<iostream>
using namespace std;
int main()
{
	int a[]={0,1,2,3,4,5,6,7,8,9},i,m,s;
	cin>>m>>s;
	if(m==1 && s==0) cout<<-1<<" "<<-1;
	else if(s==0 || s>9*m) cout<<-1<<" "<<-1;
	else
	{
		i=m;
		string b="";
		int j=9;
		while(i>0)
		{
			if(s>=a[j])
			{
				b+=(a[j]+'0');
				s-=a[j];
				i--;
			}
			else j--;
		}
		string c="";
		string d="";				// d lÃ  m?ng luu t?m giÃ¡ tr? c?a chu?i s? l?n 
		for (i=0;i<b.length();i++) d+=b[i];
		if(b[b.length()-1]=='0')
		{
			for (i=b.length()-1;i>=0;i--) if(b[i]-'0'!=0) 
			{
				b[i]=(b[i]-'0'-1)+'0';									// x? lÃ­ s? 0 ? d?u chu?i s? bÃ©
				break;
			}
			b[b.length()-1]='1';
		}
		for (i=b.length()-1;i>=0;i--) c+=b[i];
		cout<<c<<" "<<d;
	}
	return 0;
} 

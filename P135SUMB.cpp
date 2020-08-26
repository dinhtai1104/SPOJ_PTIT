#include <iostream>
#include <cstring>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <stack>
#include <deque>
#include <vector>
#include <stdlib.h>
#include <string.h>
#include <iterator>
#include <memory>
#include <fstream>
#include <ios>
#include <iomanip>
#include <istream>
#include <ostream>
#include <sstream>
#include <list>
#include <bitset>
#include <map>
using namespace std;
// :v :v :v
string tl[111];
void process(string &x,string &y){
	while(x.length()<y.length())x="0"+x;
	while(y.length()<x.length())y="0"+y;
}
string add(string x,string y){
	string s="";
	if(x.length()!=y.length())process(x,y);
	int a[1010],d=x.length();
	int r=0;
	for(int i=x.length()-1;i>=0;i--){
		r+=x[i]+y[i]-96;
		a[x.length()-i]=r%10;
		r/=10;
	}
	if(r)s="1";
	while(d>=1&&a[d]==0&&r==0)d--;
	if(d==0)s="0";
	for(int i=d;i>=1;i--)s+=(char)(a[i]+48);
	return s;
}
string sub(string x,string y){
	bool flag=0;
	if(x==y)return "0";
	if(x.length()!=y.length())process(x,y);
	if(x<y){flag=1;swap(x,y);}
	string s="";
	int a[1010],d=x.length(),r=0;
	for(int i=x.length()-1;i>=0;i--){
		a[x.length()-i]=(x[i]-y[i]+10-r)%10;
		if(x[i]-y[i]-r<0)r=1;
		else r=0;
	}
	while(d>=1&&a[d]==0)d--;
	for(int i=d;i>=1;i--)s+=(char)(a[i]+48);
	if(flag)s="-"+s;
	return s;
}
string multi(string x,string y){
	string p="";
	int a[4000],t=0,th,l;
	for(int i=0;i<x.length()+y.length()+3;i++)a[i]=0;
	for(int i=x.length()-1;i>=0;i--){
		if(x[i]==48)continue;
		for(int j=y.length()-1;j>=0;j--){
			if(y[j]==48)continue;
			t=x.length()+y.length()-i-j-1;
			th=(x[i]-48)*(y[j]-48);
			while(th>0){
				a[t]+=th%10;
				th=th/10+a[t]/10;
				a[t]%=10;
				t++;
			}
		}
	}
 
	while(t>=1&&a[t]==0)t--;
	if(t==0)return "0";
	for(int i=t;i>=1;i--)p+=(char)(a[i]+48);
	return p;
}
string dev(string x,string y){
	if(x.length()<y.length())return "0";
	if(x.length()==y.length()&&x<y)return "0";
	string t="",result="";
	int i=0,a[1000],d=0,d1;
	for(int j=1;j<=x.length()+2;j++)a[j]=0;
	while(i<x.length()){
			bool f1=1,f2=1;
			while(t.length()<y.length()&&i<x.length()){
				if(x[i]=='0'&&t.length()==0)a[++d]=x[i++]-'0';
				else {
					//f1=0;
					if(f2){
						t+=x[i++];
						f2=0;
						if(i==x.length()&&t.length()==1&&y.length()==1&&t<y){
							a[++d]=0;
							break;
						}
					}
					else {
						a[++d]=0;
						t+=x[i++];
					}
				}	
			}
			if(i==x.length()&&((t.length()<y.length())||(t.length()==y.length()&&t<y)))break;
			if(t<y)if(f2)t+=x[i++];
			else {
				t+=x[i++];
				a[++d]=0;
			}
			d1=0;
			while((t.length()>y.length())||(t.length()==y.length()&&t>=y)){
				t=sub(t,y);
				d1++;
			}
			if(t=="0")t="";
			a[++d]=d1;
	}
	d1=1;
	while(d1<=d&&a[d1]==0)d1++;
	for(int i=d1;i<=d;i++)result+=(char)(a[i]+48);
	return result;
}
void init(void){
	tl[0]="1";
	tl[1]="45";
	string s="10";
	for(int i=2;i<=101;i++){
		tl[i]=add(multi(tl[i-1],"10"),multi("45",s));
		s+="0";
	}
}
string total(string n){
	int d=0;
	string s="",r="",p="1",x="";
	for(int i=1;i<n.length();i++)p+="0";
	reverse(n.begin(),n.end());
	for(int i=n.length()-1;i>=0;i--){
		x="";
		x+=n[i];
		if(i==0)return add(s,add(multi(add(x,"1"),r),dev(multi(x,add(x,"1")),"2")));
		s=add(s,multi(r,multi(x,p)));
		s=add(s,multi(tl[i],x));
		s=add(s,dev(multi(x,multi(sub(x,"1"),p)),"2"));
		r=add(r,x);
		p=dev(p,"10");
	}
}
main(){
	string n;
	cin>>n;
	init();
	cout<<total(n);
} 

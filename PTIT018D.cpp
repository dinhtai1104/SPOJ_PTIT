#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;
ll giatri(string s){
	ll t=0;
	for(int i=0;i<s.length();i++) t+= s[i]-'A';
	//t%=26;
	return t;
}
void chuyen(string &s, ll t){
	for(int i=0;i<s.length();i++){
		s[i]-='A';
		t%=26;
		s[i]+=t;
		if(s[i]>=26){
			s[i]%=26;
			
		}
		s[i]+='A';
	}
}
void chuyen1(char &x, ll t){
	x-='A';
	t%=26;
		x+=t;
		if(x>=26){
			x%=26;
			
		}
		x+='A';
}
int main()
{
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len=s.length();
		string s1=s.substr(0,len/2), s2=s.substr(len/2, len);
		//cout<<s1<<'\n'<<s2<<endl;
		//cout<<giatri(s1)<<'\n'<<giatri(s2)<<endl;
		chuyen(s1,giatri(s1));
		chuyen(s2,giatri(s2));
		//cout<<s1<<'\n'<<s2<<endl;
		for(int i=0;i<s1.length();i++) chuyen1(s1[i], s2[i]-'A');
		cout<<s1<<'\n';
	}
} 

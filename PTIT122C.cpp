#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
vector<int>a,b;
string nhan (string a, string b) {
	int len = a.size() + b.size();
	vector<int>x(a.size()),y(b.size());
	vector<int>res(len+1);
	for(int i=0;i<a.length();i++){
		x[i]=a[i]-'0';
	}
	reverse(x.begin(),x.end());
	for(int i=0;i<b.length();i++){
		y[i]=b[i]-'0';
	}
	reverse(y.begin(),y.end());
	for(int i=0;i<a.length();i++) {
		for(int j=0;j<b.length();j++){
			res[i+j]+=x[i]*y[j];
		}
	}
	int reme=0;
	for(int i=0;i<=len;i++) {
		res[i]+=reme;
		reme=res[i]/10;
		res[i]%=10;
	}
	reverse(res.begin(),res.end());
	int ze=0;
	string res_="";
	while(res[ze]==0) ze++;
	for(int i=ze;i<=len;i++){
		res_ += (res[i]+'0');
	}
	//cout<<res_<<endl;
	return res_;
}
string tostring(int x){
	string s="";
	while(x) {
		int r = x%10;
		s = (char)(r+'0') + s;
		x/=10;
	}
	return s;
}
 
void solve(){
	int n,x;
	cin>>n>>x;
	string res = "1";
	for(int i = 1; i <= n; i++) {
		//cout<<tostring(i) <<endl;
		res = nhan(res, tostring(i));
	}
	int cnt=0;
	for(int i=0;i<res.length();i++){
		if(res[i]-'0'==x) cnt++;
	}
	cout<<cnt<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	//cout<<nhan("10000000","12345654321345");
	return 0;
}
 
 

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define PI acos(0)*2
 
string Tong(string ra, string rb) {
	ra = "0" + ra;
	rb = "0" + rb;
	reverse(ra.begin(), ra.end());
	reverse(rb.begin(), rb.end());
	while(rb.length() < ra.length()) {
		rb += "0";
	}
	string res = ra;
	int mem = 0;
	for (int i = 0; i < (int)ra.length(); i++) {
		int x = ra[i] - '0', y = rb[i] - '0';
		int kq = x+y+mem;
		mem=kq/10;
		kq=kq%10;
		res[i] = (kq + '0');
	}
	reverse(res.begin(), res.end());
	if (res[0] == '0') {
		res.erase(0,1);
	}
	return res;
}
string nhan(string res, int k) {
    string kq="0";
    for (int i=0;i<k;i++){
        kq=Tong(res,kq);
    }
    return kq;
}
int main() {
    string a;
    cin>>a;
    string res = "1";
    int x[10]={};
    if (a[0] == '?') {
        res=nhan(res,9);
    }
    char c='.';
    if (a[0]>='A'&&a[0]<='J'){
        x[a[0]-'A']++;
    }
    for (int i=1;i<a.length();i++){
        if(a[i]=='?'){
            res+="0";
        }
        if (a[i]>='A'&&a[i]<='J') {
            x[a[i]-'A']++;
        }
    }
    int m=10;
    for(int i=0;i<10;i++){
        if(x[i]>0&&(i+'A'==a[0])){
            res=nhan(res,9);
            m--;
        }
        else if(x[i]>0&&(i+'A')!=a[0]){
            res=nhan(res,m);
            m--;
        }
    }
    cout <<res;
    return 0;
}
 

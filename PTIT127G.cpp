#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
bool cmp(string a, string b) {
	if (a.length() < b.length()) return true;
	if (a.length()==b.length() && a+b<b+a)return true;
	return false; 
}
 
void solve(){
	int n;
	cin>>n;
	vector<string> res;
	string s;
	for(int i=0;i<n;i++) {
		cin>>s;
		for (int j=0;j<s.length();j++){
			string tmp="";
			bool flag = false;
			while(s[j]>='0'&&s[j]<='9') {
				tmp += s[j];
				j++;
				flag = true;
			}
			int x = 0;
			while(tmp[x] == '0') {
				x++;
			}
			if (flag && tmp.length()==x) {
				tmp = "0";
			}else
				tmp.erase(0, x);
			if (tmp!= "")res.push_back(tmp);
		}
	}
	sort(res.begin(),res.end(),cmp);
	for (int i=0;i<res.size();i++){
		cout<<res[i]<<endl;
	}
}
int main(){
	int t=1;
//	cin >> t;
	while(t--) {
		solve();
	}
 
	return 0;
}
 
 

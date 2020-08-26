#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
void solve(){
	stack<char> st;
	for (int i=0;i<s.length(); i++) {
		if (st.empty() && (s[i] == ')'||s[i]==']')) {
			cout<<"no\n";
			return;
		}
		if (s[i]=='('||s[i]=='[') {
			st.push(s[i]);
		}
		if (s[i]==')') {
			if (st.top() == '(') {
				st.pop();
			} else {
				cout <<"no\n";
				return;
			}
		}
		if (s[i]==']') {
			if (st.top() == '[') {
				st.pop();
			} else {
				cout <<"no\n";
				return;
			}
		}
 
	}
	if (st.empty()) {
		cout <<"yes\n";
	} else cout<<"no\n";
	
}
int main(){
 
	
	while(1) {
		getline(cin, s);
		if (s == ".") break;
		solve();
	}
 
	return 0;
}
 
 
 
 
 

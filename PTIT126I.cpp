#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
pair<int,int> firstCharacterAinB(string a, string b){
	for(int i=0;i<a.length();i++){
		for(int j=0;j<b.length();j++){
			if(a[i]==b[j]){
				return {i, j};
			}
		}
	}
}
void solve(){
	string a,b;
	cin>>a>>b;
	pair<int,int> First=firstCharacterAinB(a,b);
	for(int i=0;i<b.length();i++){
		if(i==First.second) {
			cout<<a<<endl;
		} else {
			for(int j=0;j<First.first;j++){
				cout<<'.';
			}
			cout<<b[i];
			for(int j=First.first;j<a.length()-1;j++){
				cout<<'.';
			}
			cout<<endl;
		}
	}
}
int main(){
	int t=1;
	while(t--) {
		solve();
	}
 
	return 0;
}
 
 

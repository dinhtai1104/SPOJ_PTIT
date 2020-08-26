#include<iostream>
#include<vector>
using namespace std;
 
void solve() {
	int n,res=0;
	cin>>n;
	vector<bool>x(n, false);
	n*=2;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		if (x[a[i]]==false){
			x[a[i]] = true;
			int count=0;
			for(int j=i+1;j<n;j++) {
				if (a[i]==a[j]) {
					res+=count;
				}
				if(x[a[j]]==false){
					count++;
				}
			}
		}
	}
	cout<<res;
}
 
int main(){
	solve();
	return 0;
}
 

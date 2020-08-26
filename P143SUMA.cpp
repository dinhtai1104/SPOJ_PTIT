#include<bits/stdc++.h>
using namespace std;
typedef struct rong{
	int chien,cong;
};
bool sapxep(rong a,rong b){
	if(a.chien<b.chien) return 1;
	return 0;
}
int main(){
	long long s,n;
	cin>>s>>n;
	rong a[10001];
	long long chien[10001];
	for(int i = 0;i<n;i++){
		cin>>a[i].chien>>a[i].cong;
	}
	sort(a,a+n,sapxep);
	int mark = 1;
	for(int i = 0;i<n;i++){
		if(i==0){
			chien[i] = s;
		}
		if(chien[i]>a[i].chien){
			chien[i+1] = chien[i]+a[i].cong;
		}
		else{
			mark=0;
			break;
		}
	}
	if(mark==0) cout<<"NO";
	else cout<<"YES";
} 

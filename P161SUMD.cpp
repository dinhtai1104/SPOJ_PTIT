#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[10][10];
int main(){
	string s;
	cin>>s;
	for(ll i = 1;i<=4;i++){
		for(ll j = 1;j<=4;j++){
			cin>>a[i][j];
		}
	}
	if(s=="R"){	
	for(ll i = 1;i<=4;i++){
			for(ll j =4;j>=1;j--){
				for(ll k = 1;k<=3;k++){
					if(a[i][k+1]==0){
						swap(a[i][k],a[i][k+1]);
					}
				}
			}
		}
		for(ll i = 1;i<=4;i++){
			for(ll j = 4;j>=2;j--){
				if(a[i][j]==a[i][j-1]){
					a[i][j]+=a[i][j-1];
					a[i][j-1]=0;
				}
			}
		}
		for(ll i = 1;i<=4;i++){
			for(ll j =4;j>=1;j--){
				for(ll k = 1;k<=3;k++){
					if(a[i][k+1]==0){
						swap(a[i][k],a[i][k+1]);
					}
				}
			}
		}
	}
	else if(s=="L"){
		for(ll i = 1;i<=4;i++){
			for(ll j = 1;j<=4;j++){
				for(ll k = 4;k>=2;k--){
					if(a[i][k-1]==0) swap(a[i][k],a[i][k-1]);
				}
			}
		}
		for(ll i = 1;i<=4;i++){
			for(ll j = 1;j<=3;j++){
				if(a[i][j]==a[i][j+1]){
					a[i][j]+=a[i][j+1];
					a[i][j+1] = 0;
				}
			}
		}
		for(ll i = 1;i<=4;i++){
			for(ll j = 1;j<=4;j++){
				for(ll k = 4;k>=2;k--){
					if(a[i][k-1]==0) swap(a[i][k],a[i][k-1]);
				}
			}
		}
	}
	else if(s=="U"){
		for(ll i = 1;i<=4;i++){
			for(ll j = 1;j<=4;j++){
				for(ll k = 4;k>=2;k--){
					if(a[k-1][i]==0) swap(a[k][i],a[k-1][i]);
				}
			}
		}
		for(ll i = 1;i<=4;i++){
			for(ll j = 1;j<=3;j++){
				if(a[j][i]==a[j+1][i]){
					a[j][i]+=a[j+1][i];
					a[j+1][i] = 0;
				}
			}
		}
		for(ll i = 1;i<=4;i++){
			for(ll j = 1;j<=4;j++){
				for(ll k = 4;k>=2;k--){
					if(a[k-1][i]==0) swap(a[k][i],a[k-1][i]);
				}
			}
		}
	}
	else{
		for(ll i = 1;i<=4;i++){
			for(ll j = 1;j<=4;j++){
				for(ll k = 1;k<=3;k++){
					if(a[k+1][i]==0){
						swap(a[k+1][i],a[k][i]);
					}
				}
			}
		}
		for(ll i = 1;i<=4;i++){
			for(ll j = 4;j>=2;j--){
				if(a[j][i]==a[j-1][i]){
					a[j][i]+=a[j-1][i];
					a[j-1][i] = 0;
				}
			}
		}
		for(ll i = 1;i<=4;i++){
			for(ll j = 1;j<=4;j++){
				for(ll k = 1;k<=3;k++){
					if(a[k+1][i]==0){
						swap(a[k+1][i],a[k][i]);
					}
				}
			}
		}
	}
	for(ll i = 1;i<=4;i++){
		for(ll j = 1;j<=4;j++) cout<<a[i][j]<<" ";
		cout<<endl;
	}
} 

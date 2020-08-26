#include<bits/stdc++.h>
using namespace std;
void solve(){
	while(1){
		int n, m;
		cin >> n >> m;
		char a[n+5][m+5];
		int b[n+5][m+5];//danh dau
		if(n == 0 && m == 0) break;
		for(int i = 0 ; i <= n+3; i++){
			for(int j = 0; j <= m+3; j++){
				a[i][j] = '.';
				b[i][j] = 0;
			}
		}
		for(int i = 1 ; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> a[i][j];
			//	b[i][j] = 0;
			}
		}
		for(int i = 1 ; i <= n; i++){
			for(int j = 1; j <= m; j++){
				//b[i][j] = -1;
				if(a[i][j] == '*') b[i][j] = -1;
				else {
					if(a[i-1][j] == '*') b[i][j]++;
					if(a[i][j-1] == '*') b[i][j]++;
					if(a[i-1][j-1] == '*') b[i][j]++;
					if(a[i-1][j+1] == '*') b[i][j]++;
					if(a[i][j+1] == '*') b[i][j]++;
					if(a[i+1][j] == '*') b[i][j]++;
					if(a[i+1][j+1] == '*') b[i][j]++;
					if(a[i+1][j-1] == '*') b[i][j]++;
				}
			}
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(b[i][j] != -1){
					cout << b[i][j] ;
				}
				else cout <<"*";
			}
			cout << endl;
		}
	}
}
int main() {
	int t=1;
	//cin >> t;
	while(t--){
		solve();
		//cout << endl;
	}
	return 0;
}
 
  

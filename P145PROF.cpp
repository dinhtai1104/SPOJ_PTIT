#include<iostream>
#include<algorithm>
using namespace std;
int a[24][60];
 
int main(){
	int n, cnt=1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int h, m;
		cin >> h >> m;
		a[h][m]++;
	}
	for (int i = 0; i < 24; i++) {
		for (int j = 0; j < 60; j++) {
			cnt = max(cnt, a[i][j]);
		}
	}
	cout << cnt;
	return 0;
}
 

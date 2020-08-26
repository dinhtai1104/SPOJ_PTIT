#include<iostream>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n, s;
		cin >> n >> s;
		int a[n];
		int d = 0;
		int de = 0;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++){
			if (d + a[i] <= s){
				de++;
				d += a[i]; 
			}
			else break;
		}
		cout << de << endl;
	}
	return 0;
}
 

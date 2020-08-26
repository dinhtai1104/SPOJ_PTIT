#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=2;i<=n;i++)
    	a[i]=0;
	int d = 0;
	for (int i = 2; i <= n; i++){
		for (int j = i; j <= n; j += i){
//		//	cout << j << endl;
			if (a[j] == 0){
				a[j] = 1;
				d++;
				if (d == k) cout << j;
			}
	//	cout << j << " ";
		}
	}
	return 0;
}
 

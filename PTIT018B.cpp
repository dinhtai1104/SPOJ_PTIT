#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n, k = 0;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < n; i++)
			cin >> b[i];
		sort(a, a + n);
		sort(b, b + n);
		for (int i = 0; i < n; i++)
			if (a[i] > b[i]) {
				cout << "NO" << endl;
				k = 0;
				break;
			}
			else k = 1;
		if (k == 1) cout << "YES" << endl;
	}
	return 0;
}
 

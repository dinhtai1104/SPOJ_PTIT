#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	n = n / 2 + 1;
	for (int i = 0; i < n; i++){//hang
		for (int j = 0; j < 2 * n - 1; j++)
			if (j >= n - i - 1 && j <= n + i - 1) cout << "D";
			else cout << "*";
		cout << endl;
	}
	for (int i = n - 2; i >= 0; i--){
		for (int j = 0; j < 2 * n - 1; j++)
			if (j >= n - 1 - i && j <= n + i - 1) cout << "D";
			else cout << "*";
		cout << endl;
	}
	return 0;
}
 

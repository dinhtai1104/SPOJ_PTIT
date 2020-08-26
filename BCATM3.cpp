#include<iostream>
using namespace std;
int main(){
	int a[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
	int test;
	cin >> test;
	while(test --){
		int n, d = 0;
		cin >> n;
		int i = 0;
		while(n){
			if (n >= a[i]){
				int t = n/a[i];
				d += n/a[i];
				n -= t * a[i];
				i++;
			}
			else i ++;
			
		}
		cout << d << endl;
	}
	return 0;
}
 

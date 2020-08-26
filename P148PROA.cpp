#include<iostream>
#include<algorithm>
using namespace std;
 
 
main(){
	int n;
	while(1) {
		int d = 1;
		cin >> n;
		if (n == 0) return 0;
		while (n != 1){
			if (n % 2 == 0){
				n /= 2;
				d++;
			}
			else {
				n = 3*n + 1;
				d++;
			}
		}
		cout << d << endl;
	}
	
	return 0;
}
 

#include<iostream>
using namespace std;
main(){
	
	int test;
	cin >> test;
	cin.ignore();
 
	while (test--){
		string n;
		cin >> n; 
		int tg = 0; 
		if (n[0] != '9' && n[0] >= '5') n[0] = '9' + '0' - n[0];
		for (int i = n.length() - 1; i >= 1; i--){
			if (n[i] >= '5') n[i] = '9' + '0' - n[i];
		}
		cout << n << endl;
	}
	return 0;
} 

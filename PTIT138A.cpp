#include<iostream>
using namespace std;
int main() {
	int a,b,c;
	do {
		cin >> a >> b >> c;
		if (a + b > c && a + c > b && b + c > a){
			if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)	
				cout << "right" << endl;
			else cout << "wrong" << endl;
		}
		else if (a == 0 && b == 0 && c == 0) return 0;
		else cout << "wrong" << endl;
	} while (true);
	return 0;
}
 

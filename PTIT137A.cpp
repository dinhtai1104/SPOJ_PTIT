#include<iostream>
#include<cmath>
using namespace std;
int main() {
	do {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if (a == b && b == c && c == d && a == 0){
			return 0;
		}
		int dem = 0;
		while (true){
			if (a == b && b == c && c == d && a != 0) {
				cout << dem << endl;
				break;
			}
			else {
				int temp = a;
				a = abs (a - b);
				b = abs (b - c);
				c = abs (c - d);
				d = abs (d - temp);
				dem++;
			}
		}
	} while (true == true);
	return 0;
}
 

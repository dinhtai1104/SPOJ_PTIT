#include<iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int k[3];
	for (int i = 0; i < 3; i++)
		cin >> k[i];
	int u = a, v = c;
	int x[1500] = {0};
	for (int i = 0; i < 1500; i++){
		if (i <= a)
			x[i]++;
		if (i == a) {
			i += b;
			a += u + b;
		}
	} 	
	for (int i = 0; i < 1500; i++){
		if (i <= c)
			x[i]++;
		if (i == c) {
			i += d;
			c += v + d;
		}
	} 	
	for (int i = 0; i < 3; i++){
		switch (x[k[i]]){
			case 0:{
				cout << "none" << endl;
				break;
			}
			case 1:{
				cout << "one" << endl;
				break;
			}
			case 2:{
				cout << "both" << endl;
				break;
			}
		}
	}
	return 0;
}
 

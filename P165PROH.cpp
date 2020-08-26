#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		float a, b, c;
		cin >> a >> b >> c;
		float s = (sqrt(a * b * c));
		cout << 4 * (s / a + s / b + s / c) << endl;
	}
	return 0;
}
 

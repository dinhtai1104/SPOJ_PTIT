#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a, b, c;
	cin >> a >> b >> c;
	double s = sqrt(a * b * c);
	cout << 4 *(s/a + s /b + s/c);
	return 0;
}
 

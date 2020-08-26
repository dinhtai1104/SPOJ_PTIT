#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int d = 0;
	while(n--){
		int x, y;
		cin >> x >> y;
		if (y - x >= 2) d++; 
	}
	cout << d;
	return 0;
}
 

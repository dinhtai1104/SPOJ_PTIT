#include<iostream>
using namespace std;
int main(){
	int x = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		string h;
		cin >> h;
		if (h == "++X") ++x;
		if (h == "X++") x++;
		if (h == "--X") --x;
		if (h == "X--") x--;
	}
	cout << x;
	return 0;
}
 

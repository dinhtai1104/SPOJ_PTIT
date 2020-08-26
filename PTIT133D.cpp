#include<iostream>
using namespace std;
int main(){
	do {
		string temp;
		cin >> temp;
		if (temp == "[END]") return 0;
		int n;
		cin >> n;
		if (n % 5 == 2 || n % 5 == 0) cout << "Hanako" << endl;
		else cout << "Taro" << endl;
	}while(1);
	return 0;
}
 

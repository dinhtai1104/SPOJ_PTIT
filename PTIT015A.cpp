#include<iostream>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		string a, b , c;
		cin >> a >> b >> c;
		string h = a + b + c;
		for (int i = 0; i < h.length(); i++){
			for (int j = 0; j < h.length() - 1; j++)
				if (h[j] < h[j + 1]) swap(h[j], h[j + 1]);
		}
		cout << h << endl;
	}
	return 0;
}
 

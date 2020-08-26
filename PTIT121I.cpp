#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int test;
	cin >> test;
	fflush(stdin);
	while (test--){
	
		string s;
		int n;
		int k;
		cin >> k >> n;
		cin.ignore();
		cin >> s;
	//	cin.ignore();
		cout << k << " ";
		for (int i = 0; i < s.length(); i++){
			for (int j = 0; j < n; j++)
				cout << s[i];
		}
		cout << endl;
	}
	return 0;
}
 

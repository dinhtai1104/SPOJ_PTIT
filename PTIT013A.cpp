#include<iostream>
#include<cstring>
using namespace std;
int main() {
//	unsigned long long n;
 
	int test;
	cin >> test;
	while (test > 0){
		string s;
		cin >> s;
		int k = s.length();
	//	cout << s[k-1];
		if (s[k-1] == '6' && s[k-2] == '8' && k > 1) cout << 1 << endl;
		else cout << 0 << endl;;
		test--;
	}
	return 0;
}
 

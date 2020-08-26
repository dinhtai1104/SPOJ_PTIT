#include<iostream>
#include<cstring>
using namespace std;
int main() {
	do {
		string s;
		int da = 0, dy = 0, dp = 0, dn = 0; //y : dong y ; a: vang; n : khong dong y; p : co nhung k bo phieu.
		cin >> s;
	//	int n = s.length();
	//	cout << n<< endl;
		if (s[0] == '#') return 0;
		else {
			for (int i = 0; i < s.length(); i++){
				if (s[i] == 'Y') dy++;
				else if (s[i] == 'N') dn++;
				else if (s[i] == 'P') dp++;
				else if (s[i] == 'A') da++;
			}
		//	cout << da <<endl;
			if (da >= dy + dp + dn) {
			cout << "need quorum" << endl;
			}
				else if (dy > dn) cout <<"yes" << endl;
				else if (dn > dy ) cout <<"no" << endl;
				else if (dy == dn)cout << "tie" << endl;
			
		}
 	}while (true);
	return 0;
}
 

#include <iostream>
using namespace std;
 
int main() {
	string s;
	getline(cin, s);
	int dh = 0, dt = 0;
	for (int i = 0; i < s.size(); i++){
	    if (s[i] >= 'a' && s[i] <= 'z') dt++;
	    else dh++;
	}
	if (dt >= dh) {
	    for (int i = 0; i < s.size(); i++)
	        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 'a' - 'A';
    } 
    else {
        for (int i = 0; i < s.size(); i++)
	        if (s[i] >= 'a' && s[i] <= 'z') s[i] += 'A' - 'a';
    }
    cout << s;
	return 0;
}
 

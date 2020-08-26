#include<iostream>
using namespace std;
bool kiemtramayman(string s){
	for (int i = 0; i < s.length(); i++)
		if (s[i] != '4' && s[i] != '7') return false;
	return true;
}
bool kiemtrave(string s){
	int nuadau = 0;
	int nuasau = 0;
	for (int i = 0; i <= s.length()/2 - 1; i++){
		nuadau += (int) s[i];
	}
	for (int j = s.length()/2; j < s.length(); j++){
		nuasau += (int) s[j];
	}
	return nuadau == nuasau;
}
int main(){
	int n;
	string s;
	cin >> n >> s;
	if (kiemtramayman(s)){
		if (kiemtrave(s)) cout << "YES";
		else cout << "NO";
//		cout << "YES";
	}
	else cout << "NO";
	return 0;
}
 

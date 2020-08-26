#include<iostream>
using namespace std;
string tong(string s){
	string res = "";
	int x = 0;
	for (int i = 0; i < s.length(); i++)
		x += s.at(i) -'0';
	while(x){
		res += (x%10) + '0';
		x /= 10;
	}
	return res;
}
int main(){
	string n;
	cin >> n;
	int d = 0;
	while(n.length() > 1){
		d++;
		n = tong(n);
	}
	cout << d;
	return 0;
}
 

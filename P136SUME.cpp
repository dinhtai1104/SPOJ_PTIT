#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
struct Number {
	int data, solan, stt;
	Number() {
		data = solan = stt = 0;
	}
};
 
bool compareTo(Number a, Number b) {
	if (a.solan>b.solan) {
		return true;
	}
	if (a.solan == b.solan && a.stt<b.stt) {
		return true;
	}
	return false;
}
 
void solve() {
	int n;
	long long c;
	cin>>n>>c;
	vector<Number> vecX;
	for (int i = 0; i < n; i++) {
		int x;
		cin>>x;
		bool isExist = false;
		for (int j = 0; j < vecX.size(); j++) {
			if (x == vecX[j].data) {
				vecX[j].solan++;
				isExist = true;
				break;
			}
		}
		if (isExist == false) {
			Number New;
			New.data = x;
			New.solan = 1;
			New.stt = i;
			vecX.push_back(New);
		}
	}
	sort(vecX.begin(), vecX.end(), compareTo);
	for (int i = 0; i < vecX.size(); i++) {
		for (int j = 0; j < vecX[i].solan; j++) {
			cout << vecX[i].data << ' ';
		}
	}
}
int main(){
	solve();
	return 0;
}
 

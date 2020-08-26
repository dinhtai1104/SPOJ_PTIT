#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int test;
	cin >> test;
	while (test--){
		double N, L, M;
		cin >> N >> L >> M;
		int month = 0;
		while(N < M){
			month++;
			N += N*L/100;
		}
		cout << month << endl;
	}
	return 0;
}
 

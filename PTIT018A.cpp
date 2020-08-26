#include<iostream>
using namespace std;
bool a[1000006] ;
void ham(){
	for (int i = 2; i < 1000005; i++)
		a[i] = true;
	for (int i = 2; i < 10006; i++){
		for (int j = 2 * i; j < 1000006; j += i)
			a[j] = false;
	}
}
int main(){
	
	int test;
	cin >> test;
	ham();
//	cout << a[13];
//	return 0;
//	int test;
//	cin >> test;
	while (test--){
		int d = 0;
		long L, Q;
		cin >> L >> Q;
		for (long i = L; i <= Q - 6; i++){
			if (a[i] == true && a[i + 6] == true) d++;
		}
		cout << d << endl;
	}
	return 0;
}
 

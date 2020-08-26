#include<iostream>
int a[100];
using namespace std;
void tao(){
	for (int i = 2; i < 100; i++)
		a[i] = 1;
	a[1] = a[0] = 0;
	for (int i = 2; i < 10; i++){
		for (int j = 2 * i; j < 100; j += i)
			a[j] = 0;
	}
}
int main(){
	tao();
	int x, y;
	cin >> x >> y;
	if (a[y] == 1){
		for (int i = x + 1; i < y; i++)
			if (a[i] == 1){
				cout << "NO";
				return 0;
			}
		cout << "YES";
	}
	else cout << "NO";
	return 0;
}
 

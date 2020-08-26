#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	long b[n + 1];
	for (int i = 1; i < n + 1; i++)
		cin >> b[i];
	int temp = b[1];
	int x = temp;
	cout << temp <<" ";
	for (int i = 2; i < n + 1; i++){
		temp = i * b[i] - x;
		cout << temp <<' ';
		x += temp;
	}
	return 0;
}
 

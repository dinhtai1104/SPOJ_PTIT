#include<iostream>
using namespace std;
int main(){
 
	do{
		int n;
		int d[100];
		for (int i = 0; i < 100; i++)
			d[i] = 0;
		cin >> n;
		if (n == 0) return 0;
 
		for (int i = 0; i < n * 6; i++){
			int x;
			cin >> x;
			d[x]++;
		}
		int k = 1;
		for (int i = 1; i < 50; i++)
			if (d[i] == 0) {
				k = 0;
				break;
			}
			else k = 1;
		if (k == 1) cout << "Yes";
		else cout << "No";
		cout << endl;
		
	}while(1);
	return 0;
}
 

#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int i = 1;
	int dem = 1;
	while(1){
		if (n - i * (i + 1) / 2 > 0){
			dem++;
			i++;
			n -= i * (i + 1) / 2;
		}
		
		else {
			cout << dem;
			return 0;
		}
	}
	return 0;
}
 

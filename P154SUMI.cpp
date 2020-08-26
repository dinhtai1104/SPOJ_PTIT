#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	int d = 0;
	cin >> n;
	for (int i = 1; i <= n - 1; i++){
		for (int j = i + 1; j <= n; j++){
		int tmp = sqrt(i*i+j*j);
		if(tmp*tmp == i*i + j*j && tmp<=n){
			d++;
		}
		}
	}
	cout <<d;
	return 0;
}
 

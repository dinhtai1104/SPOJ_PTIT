#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		long long a, b, c;
		cin >> a >> b >> c;
		long long max = a;
		if (max < b) max = b;
		if (max < c) max = c;
		long long min = a;
		if (min > b) min = b;
		if (min > c) min = c;
		cout << (max - min)<< endl;
	}
	return 0;
}
 

#include<iostream>
#include<algorithm>
using namespace std;
bool cmp (int a, int b){
	return a < b;
}
bool cm1(int a, int b){
	return a > b;
}
 
int main(){
	int test;
	cin >> test;
	int M = 1; 
	while(test--){
		 int n;
		cin >> n;
		long a[n + 4], b[n + 4];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
			cin >> b[i];
		sort(a, a + n, cmp);
		sort(b, b + n, cm1);
		long long d = 0;
		for (int i = 0; i < n; i++)
			d += a[i] * b[i];
		cout << "Case #" << M << ": " << d << endl;
		M++;
	}
} 

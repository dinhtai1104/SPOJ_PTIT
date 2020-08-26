#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m], x[100005] = {0}, y[100005] = {0};
	for (int i = 0; i < n; i++){
		cin >> a[i];
		x[a[i]]++;
 
	}
//	sort(a, a + n);
	for (int i = 1; i < 100005; i++)
		x[i] += x[i - 1];
	for (int i = 0; i < m; i++)
		cin >> b[i];
	for (int i = 0; i < m; i++)
		cout << x[b[i]] << endl;
	
	return 0;
}
 

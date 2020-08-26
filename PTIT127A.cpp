#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int m, n, k;
	cin >> m >> n >> k;
	int maxd = min(m / 2, n);
	if (m - maxd * 2 + n - maxd >= k) cout << maxd;
	else {
		while(maxd != 0 && (m - maxd * 2 + n - maxd < k) ){
			maxd--;
		}
		cout << maxd;
	}
	return 0;
}
 

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[14], b[14];
ll sum, ans, x, y;
int main() {
	for(int i = 0; i < 14; i ++)
		cin >> a[i];
	for(int i = 0; i < 14; i ++) if(a[i] != 0) {
		sum = 0;
		memcpy(b, a, sizeof(a));
		b[i] = 0, x = a[i] / 14, y = a[i] % 14;
		for(int j = 0; j < 14; j ++)
			b[j] += x;
		for(int j = 1; j <= y; j ++)
			b[(i + j) % 14] ++;
		for(int j = 0; j < 14; j ++)
			if(b[j] % 2 == 0)
				sum += b[j];
		ans = max(ans, sum);
	}
	cout << ans << endl;
} 

#include<bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n, k;
	cin >> n >> k;
	long long a[n];
	for (auto &z:a) cin >>z;
	sort(a, a + n);
 
	if (k == 0) {
		if (*min_element(a, a+n) == 1)
			cout <<-1;
		else cout<<1;
		return 0;
	}
 
	if (a[k - 1] == a[k]) {
		cout<<-1;
	}
	else cout << a[k - 1];
	return 0;
}
 
  

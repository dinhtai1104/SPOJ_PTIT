#include<iostream>
#define LL long long
using namespace std;
const int maxn = 1e5+5;
 
LL a[maxn], b[maxn];
LL dp[3][maxn];
int main()
{
	LL n, ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++)
		cin >> b[i];
	dp[1][0] = a[0];
	dp[2][0] = b[0];
	for(int i = 1; i < n; i++){
		dp[1][i] = max(dp[2][i-1] + a[i], dp[1][i-1]);
		dp[2][i] = max(dp[1][i-1] + b[i], dp[2][i-1]);
	}
	ans = max(dp[1][n-1], dp[2][n-1]);
	cout << ans << endl;
	return 0;
} 

 
#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
static int test=1;
void solve(){
	vector<ll> x(1e6+5), y(1e6+5);
	ll n, a, b, c, d, m;
	cin>>n>>a>>b>>c>>d>>x[0]>>y[0]>>m;
	for (int i = 1; i < n; i++) {
		x[i] = (a*x[i-1]+b)%m;
		y[i] = (c*y[i-1]+d)%m;
	} 
		
	vector< vector<ll> > res(3, vector<ll>(3, 0));
	for (int i = 0; i < n; i++) {
		res[x[i]%3][y[i]%3]++;
	}
	ll cnt = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cnt += (res[i][j])*(res[i][j]-1)*(res[i][j]-2)/6;
		}
		cnt += res[i][0]*res[i][1]*res[i][2];
		cnt += res[0][i]*res[1][i]*res[2][i];
	}
	cnt += res[0][0]*res[1][1]*res[2][2] + res[0][0]*res[1][2]*res[2][1]
		 + res[0][1]*res[1][0]*res[2][2] + res[0][1]*res[1][2]*res[2][0] 
		 + res[0][2]*res[1][1]*res[2][0] + res[0][2]*res[1][0]*res[2][1];
	cout<<"Case #" << test++ << ": " <<cnt<<'\n';
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
 
	return 0;
}
 
 
 

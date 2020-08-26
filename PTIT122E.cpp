#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve() {
	ll n;
	cin>>n;
	vector< pair<double,double> > vecX, vecY;
	ll res=0;
	for (int i = 0; i < n; i++) {
		double x,y;
		cin>>x>>y;
		vecX.push_back({x, y});
	}	
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			vecY.push_back({(vecX[i].first + vecX[j].first)/2, (vecX[i].second + vecX[j].second)/2});
		}
	}
	sort(vecY.begin(), vecY.end());
	ll tmp=1;
	for (int i = 1; i < vecY.size(); i++) {
		if (vecY[i] == vecY[i-1]) {
			tmp++;
			if (i == vecY.size()-1) {
				res += tmp*(tmp-1)/2;
			}
		}else {
			res += tmp*(tmp-1)/2;
			tmp=1;
		}
	}
	cout<<res<<'\n';
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
 
	return 0;
}
 
 

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define get(n) ll n; cin>>n
#define getStr(s) string s;cin>>s;
#define getStrs(s) string s;getline(cin,s);
#define set_arr(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define sort_arr(a,n) stable_sort(a,a+n)
#define sort_vect(a) stable_sort(a.begin(),a.end())
#define btSpeed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(),x.end()
 
void awake() {
 
}
 
void FixedUpdate(){
	queue<int>q1,q2,q0;
	ll n;
	cin>>n;
	ll s=0;
	vector<int>a(n);
	for(int i=0;i<n;i++) {
		cin>>a[i];
		s+=a[i];
	}
	sort(all(a));
 
	for(int i=0;i<n;i++) {
		if (a[i]%3==0)q0.push(a[i]);
		if (a[i]%3==1)q1.push(a[i]);
		if (a[i]%3==2)q2.push(a[i]);
	}
	if (s%3==1) {
		if(!q1.empty())
			q1.pop();
		else {
			if (q2.size()<2) {
				cout<<-1<<endl;
				return;
			} 
			q2.pop();q2.pop();
		}
	}
	 
	else if (s%3==2){
		if(!q2.empty())
			q2.pop();
		else {
			if (q1.size()<2) {
				cout<<-1<<endl;
				return;
			} 
			q1.pop();q1.pop();
		}
	}
	vector<int>res;
	while(!q1.empty()) {	
		res.push_back(q1.front());
		q1.pop();
	}
	while(!q2.empty()) {
		res.push_back(q2.front());
		q2.pop();
	}
	while(!q0.empty()) {
		res.push_back(q0.front());
		q0.pop();
	}
	
	if (res.empty()) {
		cout<<-1<<endl;
		return;
	}
	sort(all(res), greater<int>());
	if (res[0]==0) {
		cout<<0<<endl;
		return;
	}
	for(int i=0;i<res.size();i++){
		cout<<res[i];
	}
	cout<<endl;
}
int main(){
	awake();
	int t=1;
	cin >> t;
	while(t--) {
		FixedUpdate();
	}
 
	return 0;
}
 
 
 
 
 

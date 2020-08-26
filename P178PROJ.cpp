#include<bits/stdc++.h>
 
using namespace std;
 
#define   For(i, a, b)            for(int i = a; i <= b; i++)
 
 
int const maxn = 1000000;
int const base = 1e9 + 7;
 
priority_queue < int, vector <int>, greater<int> > Qu;
 
int main(void){
	int N;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int K;
	cin>>N;
	For(i, 1, N){
		cin>>K;
		Qu.push(K);
	}
	long long res = 0;
	while(Qu.empty() == false){
		int l, r;
		l = Qu.top();
		Qu.pop();
		r = Qu.top();
		Qu.pop();
		res = ( res + 1ll * (l + r)) % base;
		if(Qu.empty() == false){
			Qu.push((l+r) % base);
		}
	}
	cout<<res;
	
	return 0;
} 

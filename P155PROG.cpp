#include <bits/stdc++.h>
using namespace std;
 
int main(){	
	int n;
	cin >> n;
	map <int,int> Mymap;
	int s[n+5];
 
	for(int i = 1; i <= n; i++){
		cin >> s[i];
		Mymap[s[i]]=i;
	}
	for(int i = 1; i <= n; i++)
		cout<<Mymap[i]<<" ";
 
} 

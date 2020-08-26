#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
	Sinh
		Nhi phan
		Hoan vi
		To hop
*/
int a[20], n = 4;
 
void In() {
	for (int i = 1; i <= n; i++) {
		cout<<a[i];
	}
	cout<<endl;
}
void In(int n) {
	for (int i = 1; i <= n; i++) {
		cout<<a[i];
	}
	cout<<endl;
}
void SinhNhiPhan() {
	for (int i = 0; i < n; i ++) {
		a[i] = 0;
	}
	while(1) {
		In();
		int i = n - 1;
		while(i >= 0 && a[i] == 1) {
			a[i]=0;
			i--;
		}
		if (i < 0) {
			return;
		} 
		a[i] = 1;
	}
}
 
void SinhHoanVi() {
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
	In();
	for (int j = n; j >= 1; j--) {
		if (j == 1) {
			return;
		} 
		if (a[j] > a[j - 1]) {
			for (int i = n; i >= 1; i--) {
				if (a[i] > a[j - 1]) {
					swap(a[i], a[j - 1]);
					sort(a + j, a + n + 1);
					In();
					break;
				}
				
			}
			j = n + 1;
		}
		
	}
}
 
void SinhToHop() {
	int n, k;
	cin>>n>>k;
	int a[30], b[30];
	for (int i = 1; i <= k; i++) {
		cin>>a[i];
		b[i] = a[i];
	}
	// Sinh ke tiep
	int i = k;
	while(i >= 1 && b[i] == n - k + i) i--;
	if (i <= 0) {
		cout<<k<<endl;
		return;
	}
	b[i]++;
	for (int j = i + 1; j <= k; j++) {
		b[j] = b[j - 1] + 1;
	}
	
	//sort(b + 1, b + n + 1);
	int Map[100] = {};
	for (int i = 1; i <= k; i++)
	{
		Map[a[i]]=1;	
	}	
	int count = 0;
	for (int i = 1; i <= k; i++) {
		if (Map[b[i]]==1) {
			count++;
		}
	}
	cout<<k-count<<endl;
 
}
 
void Bai15() {
	int index;
	string a;
	cin>>index>>a;
	int len = a.length();
	int i = len - 2;
	cout<<index<<' ';
	// 123654
//	while(i >=0 && a[i] >= a[i + 1]) i--;
//	if (i < 0) {
//		cout<<"BIGGEST\n";
//		return;
//	}
//	int k = len - 1;
//	while(a[i] >= a[k]) k--;
//	swap(a[i], a[k]);
//	sort(a.begin() + i + 1, a.end());
//	cout<<a<<endl;
	
	/*
		next_permutation(a, a+n);
		next_permutation(a.begin(), a.end());
		next_..==NULL
	*/
	//algorithm
	if(next_permutation(a.begin(), a.end()) != NULL) {
		cout<<a<<'\n';
	} else {
		cout<<"BIGGEST\n";
	}
	
	
}
 
 
void solve(){ // coi nhu ham Main
	int t;
	cin>>t;
	while(t--)
		Bai15();
}
int main(){
	
	solve();
 
	return 0;
}
 
 
 
 
 

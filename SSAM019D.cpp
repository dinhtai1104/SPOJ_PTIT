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
//	int index;
//	string a;
//	cin>>index>>a;
//	int len = a.length();
//	int i = len - 2;
//	cout<<index<<' ';
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
//	if(next_permutation(a.begin(), a.end()) != NULL) {
//		cout<<a<<'\n';
//	} else {
//		cout<<"BIGGEST\n";
//	}
	int a[]={1,2,3,4};
	for (int i=0;i<4;i++)cout<<a[i];
	cout<<endl;
	while(next_permutation(a, a+4)!=NULL) {
		for (int i=0;i<4;i++)cout<<a[i];
		cout<<endl;
	}
	
	
}
 
 
bool Update(int a[], int n, int num) {
	int c = 0;
	// 001 = 009
	for (int i = 0; i < n; i++) {
		c = (c * 10 + a[i] * 9)%num;
	}
	if (c==0) {
		
		return true;
	}
	return false;
}
void SinhNhiPhan(int n, int num) {
	int a[100];
	for (int i = 0; i < n; i ++) {
		a[i] = 0;
	}
	while(1) {		
		int i = n - 1;
		while(i >= 0 && a[i] == 1) {
			a[i]=0;
			i--;
		}
		if (i < 0) {
			return;
		} 
		a[i] = 1;
		if (Update(a, n, num)) {
			int i;
			for (i =0;i<n;i++) if (a[i]==1) break;
			for (int j= i; j<n;j++) {
				cout<<a[j]*9;
				// 1101 => 9909
			}
			cout<<endl;
			return;
		}
	}
}
 
 
/*
	Neu day hien tai 001 -> 9 % num == 0 => 9
	Neu n = 11
	0000000000000000011
	0000000000000000099 => 99 % 11 == 0 cout<<99;
*/
void Bai16() {
	int n, k;
	cin>>n>>k;
	int a[n + 1][n + 1];
	for (int i = 1; i<=n;i++) {
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	int hoanvi[n + 1];
	for(int i=1;i<=n;i++)hoanvi[i]=i;
	int count=0;
	vector<int> res;
	while(1) {
		int s=0;
		for(int i=1;i<=n;i++) {
			s += a[i][hoanvi[i]];
		}
		if (s == k) {
			
			for (int i=1;i<=n;i++) res.push_back(hoanvi[i]);
			//count++;
		}
		if (next_permutation(hoanvi + 1, hoanvi + 1+n)==NULL) break;		
	}
	cout<<res.size()/n<<endl;
	int cnt=0;
	for(int i=0;i<res.size(); i++) {
		if (cnt==n) {
			cnt = 0;
			cout<<endl;
		}
		cout<<res[i]<<' ';
		cnt++;
	}
	/// n!
}
 
 
void B17() {
	int n;
	cin>>n;
	SinhNhiPhan(20, n);
}
 
void solve(){ // coi nhu ham Main
	int t=1;
	cin>>t;
	while(t--)
		B17();
}
int main(){
	
	solve();
 
	return 0;
}
 
 
 
 
 

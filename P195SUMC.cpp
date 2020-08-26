#include<bits/stdc++.h>
using namespace std;
vector<int> pr(1e5, 1);
bool giaiPT(int x) {
    long long denta = 1+8*x;
	long long tmp=sqrt (denta);
	if ((tmp*tmp)==denta && (-1+tmp)%2==0) return 1;
	return 0;
 
}
void sieve() {
    pr[0] = pr[1] = 0;
    for (int i = 2; i < sqrt(1e5); i++) {
        if (pr[i] == 1) {
            for (int j = i * i; j < 1e5; j += i) {
                pr[j] = 0;
            }
        }
    }
 
}
 
int main(){
    int n;
    cin>>n;
    int cnt25 = 0, cnt50 = 0, cnt100 = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
    }
    if (a[0]==25)cnt25++;
        if(a[0]==50)cnt50++;
        if (a[0] ==100) cnt100++;
    for (int i = 1; i < n; i++) {
        if (a[i] == 25) {
            cnt25++;
        }
        if (a[i] == 50) {
            cnt50++;
            cnt25--;
        }
        if (a[i] == 100) {
            cnt100++;
            if (cnt50 > 0) {
                cnt50--;
                cnt25--;
            }else {
                cnt25 -= 3;
            }
        }
    }
    if (cnt25 < 0 || cnt50 < 0) {
        cout << "NO";
    }
    else cout << "YES";
    return 0;
} 

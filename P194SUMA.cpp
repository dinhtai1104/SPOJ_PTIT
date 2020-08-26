#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for (auto &z: a) cin>>z;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (k == 0) break;
        if (a[i] < 0) {
            a[i] *= -1;
            k--;
        }
    }
    //cout <<k  << endl;
    int id = 0;
    int min_ = *min_element(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (a[i] == min_) {
            id = i;
        }
    }
    //cout << a[id] << endl;
    if (k % 2 != 0) a[id] *= -1;
    long long s = 0;
    for (auto z:a) s+= z;
    cout << s;
    return 0;
} 

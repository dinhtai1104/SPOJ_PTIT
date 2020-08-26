#include<bits/stdc++.h>
using namespace std;
 
string a[4];
 
bool cmp(const string &a, const string &b) {
    if(a[1] != b[1]) {
        return a[1] < b[1];
    } else {
        return a[0] < b[0];
    }
}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for(int i = 0; i < 3; i ++) {
        cin >> a[i];
    }
    sort(a, a + 3, cmp);
    int l = 1, ans = 3;
    for(int i = 1; i < 3; i ++) {
        if(a[i] == a[i - 1]) {
            l ++;
        } else {
            l = 1;
        }
        ans = min(3 - l, ans);
    }
    l = 1;
    for(int i = 1; i < 3; i ++) {
        if(a[i][0] == a[i - 1][0] + 1 && a[i][1] == a[i - 1][1]) {
            l ++;
        } else {
            l = 1;
        }
        ans = min(3 - l, ans);
    }
    for(int i = 0; i < 2; i ++) {
        if(a[i][0] == a[i + 1][1] - 2 && a[i][1] == a[i + 1][1]) {
            ans = min(ans, 1);
        }
    }
    cout << ans;
    return 0;
}
 

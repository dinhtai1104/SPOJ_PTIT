#include <bits/stdc++.h>
using namespace std;
 
string pre[20];
void before() {
    pre[0] = "{}";
    pre[1] = "{{}}";
    pre[2] = "{{},{{}}}";
    for (int i = 3; i < 20; i++) {
        pre[i] = "{{},";
        for (int j = 1; j < i; j++) {
            pre[i] += pre[j];
            if (j != i - 1) {
                pre[i] += ",";
            }
            else pre[i] += "}";
        }
    }
}
 
int main() {
    before();
    int t;
    cin >> t;cin.ignore();
    while(t--) {
        string a, b;
        getline(cin, a);
        getline(cin, b);
        int x, y;
        for (int i = 0; i < 20; i++) {
            if (pre[i] == a) {
                x = i;
            }
            if (pre[i] == b) {
                y = i;
            }
        }
       // cout << x << " " << y << endl;
        cout << pre[x + y] << endl;
    }
} 

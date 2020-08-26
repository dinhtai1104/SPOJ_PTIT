#include <bits/stdc++.h>
using namespace std;
bool cmp(char a, char b) {
    return a > b;
}
int main() {
	ios::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    sort(b.begin(), b.end(), cmp);
    int i = 0, j = 0;
    while(j < b.length() && i < a.length()) {
        if (a[i] < b[j]) {
            swap(a[i], b[j]);
            i++;
            j++;
        }
        else {
            i++;
        }
    }
    cout << a;
    return 0;
} 

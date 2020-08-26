#include <bits/stdc++.h>
using namespace std;
vector<int> ke[100];
vector<bool> vs(100, false);
int dem = 1;
void DFS(int u) {
    vs[u] = true;
    for (int i = 0; i < ke[u].size(); i++) {
        //res++;
        if (vs[ke[u][i]] == false) {
            dem++;
            DFS(ke[u][i]);
        }
    }
}
 
vector<int> thaoTac(int n, int m) {
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) arr[i] = i;
    vector<int> arr1(n + 1, 0);
 
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        arr1[v] = u;
        arr[u] = 0;
    }
    for (int j = 1; j <= n; j++) {
        if (arr1[j] == 0) {
            for (int k = 1; k <= n; k++) {
                if (arr[k] != 0) {
                    arr1[j] = arr[k];
                    arr[k] = 0;
                    break;
                }
            }
        }
    }
    return arr1;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<string> str(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> str[i];
        }
        vector<int> a = thaoTac(n, m);
        for (int i = 1; i <= n; i++) {
            cout << str[a[i]] << " ";
        }
        cout << endl;
    }
}
 
/*
arr1: 1 3 4 5 6 2 7 8
arr2: 0 0 0 0 0 0 0 0
 
*/ 

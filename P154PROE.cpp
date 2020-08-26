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
 
int main() {
    int n, m;
    cin >> n>>m;
    for(int i = 0; i < m; i++) {
        int u,v;
        cin>>u>>v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        if (vs[i] == false) {
            DFS(i);
            //cout << t << endl;
           // cout << dem << endl;
            res *= (long long)pow(2, dem - 1);
            dem = 1;
        }
    }
    cout << res;
} 

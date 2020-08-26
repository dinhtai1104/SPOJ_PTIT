#include<bits/stdc++.h>
using namespace std;
int n, m, u;
vector<int> ke[10005];
vector<bool> vs(10005, false);
void Init() {
    for (int i = 0; i < 10005; i++) ke[i].clear(), vs[i] = false;
    cin >> n >> m>> u;
    for (int i = 0; i < m; i++) {
        int u,v;
        cin>>u>>v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
}
void DFS(int t) {
    cout << t << ' ';
    vs[t] = true;
    for (int i = 0; i < ke[t].size(); i++) {
        if (vs[ke[t][i]] == false) {
            DFS(ke[t][i]);
        }
    }
}
void process() {
    Init();
    DFS(u);
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) {
        process();
    }
    return 0;
} 

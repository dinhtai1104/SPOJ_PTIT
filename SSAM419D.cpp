#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> ke[100005];
vector<bool> vs(100005, false);
void Init() {
    for (int i = 0; i < 100005; i++) ke[i].clear(), vs[i] = false;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u,v;
        cin>>u>>v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
}
int DFS(int t) {
    //cout << t << ' ';
    int res = 1;
    vs[t] = true;
    for (int i = 0; i < ke[t].size(); i++) {
        if (vs[ke[t][i]] == false) {
            res += DFS(ke[t][i]);
        }
    }
    return res;
}
void BFS(int t) {
    vs[t] = true;
    queue<int> q;
    q.push(t);
    while(!q.empty()) {
        int v = q.front();
        cout << v << ' ';
        q.pop();
        for (int i = 0; i < ke[v].size(); i++) {
            if (vs[ke[v][i]] == false) {
                q.push(ke[v][i]);
                vs[ke[v][i]] = true;
            }
        }
    }
}
void process() {
    Init();
    int max_ = 0;
    for (int i = 1; i <= n; i++) {
        if (vs[i] == false) {
            max_ = max(max_, DFS(i));
        }
    }
    cout << max_ << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) {
        process();
    }
    return 0;
} 

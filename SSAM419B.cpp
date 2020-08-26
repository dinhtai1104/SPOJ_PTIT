#include <bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
vector<bool> vs(1005, false);
int n,m,x;
void clear() {
    for(int i=0;i<1005;i++) ke[i].clear(), vs[i]=false;
}
void init(){
    cin>>n>>m>>x;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
}
void BFS(int s){
    vs[s]=true;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int u=q.front(); q.pop();
        cout<<u<<' ';
        for(int i=0;i<ke[u].size();i++){
            if(vs[ke[u][i]]==false) {
                q.push(ke[u][i]);
                vs[ke[u][i]]=true;
            }
        }
    }
}
void solve(){
    clear();
    init();
    BFS(x);
}
 
int main() {
    int t;
    cin>>t;
    while(t--) solve();
} 

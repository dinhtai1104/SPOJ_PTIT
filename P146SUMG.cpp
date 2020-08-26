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
	ios::sync_with_stdio(false);
    int r,c,a,b;
    cin>>r>>c>>a>>b;
    char ch[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c;j++) {
            cin >> ch[i][j];
        }
    }
    for (int  i = 0; i < r;i++) {
        for (int k = 0; k <a;k++) {
            for (int j = 0; j < c;j++) {
                for (int l = 0; l < b; l++) {
                    cout << ch[i][j];
                }
            }
            cout << '\n';
        }
    }
} 

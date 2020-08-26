#include <bits/stdc++.h>
using namespace std;
int n, cnt, t[31];
bool mat[350][350];
int mx[] = {0, 1, 1, 1, 0, -1, -1, -1};
int my[] = {1, 1, 0, -1, -1, -1, 0, 1};
bool mem[350][350][30][8];
 
void rec(int x, int y, int d, int idx){
    mem[y][x][idx][d] = true;
    for(int i = 0; i < t[idx]; i++){
        mat[y][x] = true;
        x += mx[d];
        y += my[d];
    }
    mat[y][x] = true;
    if(idx + 1 == n) return;
    
    int d1 = (d+1)%8;
    int d2 = (8 + ((d-1)%8))%8;
 
    if(!mem[y][x][idx+1][d1])
        rec(x, y, d1, idx+1);
    if(!mem[y][x][idx+1][d2])
        rec(x, y, d2, idx+1);
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i = 0; i<n; i++)
        cin>>t[i];
    t[0]--;
    
    rec(150, 150, 0, 0);
 
    for(int i = 0; i<350; i++)
        for(int j = 0; j<350; j++)
            if(mat[i][j]) cnt++;
 
    cout<<cnt<<endl; // I forgot this, but It AC, just kidding :v
    return 0;
}
/*
	README:
	+) Test cases are very weak and I think it's wrong
	+) When I take the result % 1999 my code is WA and I do nothing It AC :) R u kidding me?
 
*/ 

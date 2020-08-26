	
#include<cstdio>
#include<algorithm>
using namespace std;
 
#define N 1000
#define M 10
 
int pos[M][N], n, m, f[N], a[M][N];
 
bool ok(int x, int y) {
	for(int i = 0; i < m; ++i)
		if(pos[i][x] > pos[i][y]) return 0;
	return 1;
}
 
int main() {
	scanf("%d%d",&n,&m);
	for(int i = 0; i < m; ++i) 
		for(int j = 0; j < n; ++j) {
			scanf("%d", &a[i][j]);
			pos[i][--a[i][j]] = j;
		}
	for(int i = 0; i < n; ++i) {
		f[i] = 1;
		for(int j = 0; j < i; ++j) 
			if(ok(a[0][j], a[0][i])) f[i] = max(f[i], f[j]+1);
	}
	int res = 1;
	for(int i = 0; i < n; ++i) res = max(res, f[i]);
	printf("%d\n", res);
	return 0;
} 

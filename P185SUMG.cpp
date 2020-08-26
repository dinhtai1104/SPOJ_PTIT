#include  <bits/stdc++.h>
using namespace std;
#define N 1005
typedef pair<long,long> ii;
typedef pair<long,ii> iii;
#define fi first
#define se second
int a[N][N];
int n,m;
long f[N][N];
#define oo 100000000
int dx[3]={0,0,1};
int dy[3]={-1,1,0};
long w= 8000;
long xang = 25000;
long SoXangDo(long x)
{
    return (x-((x/1000)*1000-1));
}
bool check(int i, int j)
{
    return (i>=1&&i<=m&&j>=1&&j<=n);
}
void dijkstra()
{
    priority_queue <iii, vector <iii>, greater<iii> > pq;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++) f[i][j]=oo;
    f[1][1]=0;
    pq.push(iii(0,ii(1,1)));
    while (!pq.empty())
    {
        ii u = pq.top().se;
        long du= pq.top().fi;
        pq.pop();
        int x= u.fi,y=u.se;
        if (du!=f[x][y]) continue;
        for (int i=0; i<3; i++)
        {
            int xx= x+dx[i],yy= y+dy[i];
            if (check(xx,yy))
            {
                long uv;
                if (a[x][y]>=a[xx][yy])
                {
                    uv=10;
                }
                else
                {
                    long sum= xang+w;
                    int SoXang = SoXangDo(sum-du);
                    int tmp= (a[xx][yy]-a[x][y])*4;
                    uv= 10+min(SoXang+(sum-du-SoXang)/1000*tmp, (sum-du)/1000*tmp);
                }
                if (f[xx][yy]>uv+du&&(uv+du<=xang))
                {
                    f[xx][yy]=du+uv;
                    pq.push(iii(f[xx][yy],ii(xx,yy)));
                }
            }
        }
    }
}
int main()
{
 
    cin>>m>>n;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++)
        {
            cin>>a[i][j];
            a[i][j]/=100;
        }
    dijkstra();
    if (xang- f[m][n]>=0) cout<<(xang-f[m][n]);
    else cout<<"-1";
    return 0;
}
  

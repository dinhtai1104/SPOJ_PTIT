#include <iostream>
#include <math.h>
using namespace std;
 
long long d(long long xa,long long ya,long long xb,long long yb)
 {
 return sqrt( (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb) );
 }
 
int main()
{
 long long t,xA,yA,xB,yB;
 int n; cin >> n;
 for(int i=0;i<n;i++)
 {
 cin >> xA >> yA >> xB >> yB;
 if ( (yA>0 && yB>0) || (yA<0 && yB<0)) t= d(xA,-yA,xB,yB);//AB
 else t= d(xA,yA,xB,yB);
 cout << t <<endl;
 t=0;
 }
 return 0;
} 

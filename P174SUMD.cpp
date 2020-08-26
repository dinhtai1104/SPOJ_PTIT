#include<iostream>
using namespace std;
int songaythang(int thang)
{
	switch(thang)
	{
		case 1: case 3:case 5:case 7:case 8:case 10:case 12: return 31;
		case 4:case 6:case 9:case 11: return 30;
	    case 2: return 28;	
	}
}
int main()
{
		int next[]={1,2,3,4,5,6,7,1},x,y;
	cin>>x>>y;
	int n=songaythang(x),dem=0,i=1;
	while(y!=7)
	{
		i++;                                      // tim ngay chu nhat dau tien cua thang do
		y=next[y];
	}
	while(i<=n)
	 {
	 	i+=7;                                     // cong dan de tim so ngay chu nhat cua thang do
	 	dem++;                                              
	 }
	 if(i-7<n) cout<<dem+1; else cout<<dem;         
	return 0;
} 

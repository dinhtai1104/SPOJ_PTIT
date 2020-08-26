#include <bits/stdc++.h>
using namespace std;
 
main(){
	long long n;
	cin>>n;
	long long sub[n+1][4];
	long long time[n+1][4];
	long long diemPhat[n+1];
	string ten[n+1];
	long long max=0,phat=0;
	long long vitri=0;
	for(int i=0;i<n;i++){
		long long sobai=0;
		cin>>ten[i];
		diemPhat[i]=0;
		for(long long j=0;j<4;j++){
			cin>>sub[i][j];
			cin>>time[i][j];
			if(time[i][j]>0){
				sobai+=1;
				diemPhat[i]+=time[i][j]+(sub[i][j]-1)*20;
			}
		}
		if(max<sobai){
			max=sobai;
			vitri=i;
			phat=diemPhat[i];
		}
		if(max==sobai){
			if(phat>diemPhat[i]){
				vitri=i;
				phat=diemPhat[i];
			}
		}
	}
 	cout<<ten[vitri]<<" "<<max<<" "<<phat<<endl;
}  

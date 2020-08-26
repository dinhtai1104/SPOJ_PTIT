#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n,a,b;
	cin>>n>>a>>b;
	int arr[n];
	int sum1=a;
	int sum2=b*2;
	int count=0;
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int dem2=0;
	for (int i=n-1;i>=0;i--){
		if (arr[i]==2){
			dem2+=2;
		}else break;
	}
	if (dem2-sum2>=0){
		count+=dem2-sum2;
		sum2=0;
	}else sum2=abs(sum2-dem2);
	int dem1=0;
	for (int i=0;i<n;i++){
		if (arr[i]==1) dem1++;
	}
	if (dem1-sum1>=0){
		int du=dem1-sum1;
		if (du>=sum2) count+=du-sum2;
	}
	cout<<count;
 
return 0;
} 

#include<iostream>
using namespace std;
 
long long C ( int n, int k ){
    long long res = 1;
    for ( int i = 1; i <= k ; i ++ , n-- )
    {
        res = res *n/i;
    }
    return res;
}
long long toHop(int k, int n){
	if(k==0 || k==n){
		return 1;
	} 
	return (toHop(k-1, n-1) + toHop(k,n-1));
}
main(){
	int n,m,t;
	cin >> n >> m >> t;
	int nu=1;
	int nam=t-nu;
	long long sum=0;
	while(nam>=4){
		sum=sum+C(n, nam)*C(m, nu);
		//sum = sum + toHop(nam,n) + toHop(nu,n);
		nu++;
		nam=t-nu;
	}
	cout << sum;
	return 0;
} 

#include <iostream>
 
using namespace std;
 
int a[100000] ;
int k , n, s, res;
 
void printResult() { // hÃ m dÃ¹ng d? in m?t c?u hÃ¬nh ra ngoÃ i
    for(int i = 1 ; i <=k ; i++) {
        cout<<a[i]<<" " ;
    }
    cout<<endl ;
}
bool check(int a[], int s)
{
	int sum = 0;
	for (int i = 1; i <= k; i++) sum += a[i];
	if (sum == s) return 1;
	return 0;
}
void backtrack(int i ) { // hÃ m quay lui
    for(int j = a[i-1]+1 ; j<=n-k+i ; j++ ) { // xÃ©t cÃ¡c kh? nang c?a j
        a[i] = j ; // ghi nh?n m?t giÃ¡ tr? c?a j
        if(i==k) { // n?u c?u hÃ¬nh dÃ£ d? k ph?n t?
            // in m?t c?u hÃ¬nh ra ngoÃ i
           if (check(a, s)) res++;
           //printResult();
        }
        else {
            backtrack(i+1) ; // quay lui
        }
 
    }
}
void toHop() { // hÃ m li?t kÃª cÃ¡c t? h?p
    if(k>=0 && k <=n ) {
        a[0] = 0 ; // kh?i t?o giÃ¡ tr? a[0]
        backtrack(1) ;
    }
}
 
 
int main()
{
	while(1)
	{
	    //cout<<"Nhan k va n: " ;
	    cin>>n>>k >> s;
	    if (n == 0 && k == 0 && s == 0) return 0;
	    toHop();
	    cout << res << endl;;
	    res = 0;
	}
    return 0;
} 

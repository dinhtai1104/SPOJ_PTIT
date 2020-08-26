#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
 
int main(){
	int n;
	cin >> n;
	string a,b;
	cin >> a >> b;
	int dem=0;
	for(int i=0 ; i<n ;i++){
		int x=abs((a[i]-'0')-(b[i]-'0'));
		if(x<=5)	dem+=x;
		else	dem+=10-x;
	}
	cout << dem;
	return 0;
} 

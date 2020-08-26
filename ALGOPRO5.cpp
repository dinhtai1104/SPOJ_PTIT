#include <iostream> 
#include <math.h> 
 
using namespace std; 
 
int main() { 
 
int n; 
long long c = 0; 
cin >> n; 
for(long long i = 1; i <= n; i++) { 
c += pow(2, i); 
} 
cout << c << endl; 
 
return 0; 
}  

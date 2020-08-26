#include <iostream>
#include<algorithm>
using namespace std;
#define maxn 1000000
long long K, Dis[maxn];
string Name[maxn];
 
int main() {
	int N;
	Dis[0] = 0;
	int key;
	cin >> N >> K;
	for (int i = 1; i < N + 1; i++){
		cin >> Name[i];
		Dis[i] = Dis[i - 1] + i;
		if (Dis[i] <= K) key = i;
	}
	sort(Name + 1, Name + N + 1);
	if (Dis[key] == K) cout << Name[key];
	else{
		K = K - Dis[key];
		cout << Name[K];
	}
	// your code here
 
	return 0;
} 

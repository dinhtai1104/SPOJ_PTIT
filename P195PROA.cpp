#include <iostream>
#include <string>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	if (n % 7 == 0) {
		cout<<2*(n/7) << ' ' << 2*(n/7);
	}
	else {
		int soTuanMax = n/7;
		int soNgayDu = n%7;
		int soNgayMin = soTuanMax * 2, soNgayMax = soNgayMin;
		if (soNgayDu > 5) {
			soNgayMin++;
		}
		if (soNgayDu == 1) {
			soNgayMax++;
		} else {
			soNgayMax += 2;
		}
		cout << soNgayMin << ' ' << soNgayMax;
	}
} 

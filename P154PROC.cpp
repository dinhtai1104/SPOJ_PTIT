#include<iostream>
using namespace std;
int main(){
	char a[34] = {'#'};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		a[i] = 'O';
	for (int i = n; i < 34; i++)
		a[i] = '#';
	cout << "+------------------------+" << endl;
	cout << "|" <<a[0] << "." <<a[4] << "." <<a[7] <<"." <<a[10] <<'.' <<a[13] <<'.'<<a[16]<<'.' <<a[19]<<'.' <<a[22] <<'.' <<a[25]<<'.'<<a[28]<<'.'<<a[31]<<'.'<<"|D|)"<< endl;
	cout << "|" <<a[1] << "." <<a[5] << "." <<a[8] <<"." <<a[11] <<'.' <<a[14] <<'.'<<a[17]<<'.' <<a[20]<<'.' <<a[23] <<'.' <<a[26]<<'.'<<a[29]<<'.'<<a[32]<<'.'<<"|.|"<< endl;
	cout << "|" <<a[2] << ".......................|" << endl;
	cout << "|" <<a[3] << "." <<a[6] << "." <<a[9] <<"." <<a[12] <<'.' <<a[15] <<'.'<<a[18]<<'.' <<a[21]<<'.' <<a[24] <<'.' <<a[27]<<'.'<<a[30]<<'.'<<a[33]<<'.'<<"|.|)"<< endl;
	cout << "+------------------------+";
 
	return 0;
}
 

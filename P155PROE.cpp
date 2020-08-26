#include<iostream>
using namespace std;
int main()
{
	string h;
	cin >> h;
	int d = 1;
	for (int i = 0; i < h.length(); i++)
	{
		if (h[i] == '0') d *= 2;
		if (h[i] == '1') d *= 7;
		if (h[i] == '2') d *= 2;
		if (h[i] == '3') d *= 3;
		if (h[i] == '4') d *= 3;
		if (h[i] == '5') d *= 4;
		if (h[i] == '6') d *= 2;
		if (h[i] == '7') d *= 5;
		if (h[i] == '8') d *= 1;
		if (h[i] == '9') d *= 2;		
	}
	cout << d;
	return 0;
}
 

#include <iostream>
using namespace std;
int a[100], n, stop = 0; // khá»i táº¡o máº£ng chá»©a cÃ¡c sá» 0 1;
void Nhap()
{
	for (int i = 0; i < n; i++)
		a[i] = 0;
}
 
void Xuat()
{
	for (int i = 0; i < n; i++)
		cout << a[i];
	cout << endl;
}
 
void SinhNhiPhan()
{
	int i = n - 1; // cháº¡y tá»« cuá»i dÃ£y vá»
	while (i >= 0 && a[i] == 1) // náº¿u cáº¥u hÃ¬nh trÆ°á»c lÃ  1, thÃ¬ cÃ¡c sá» sau sáº½ Äc gÃ¡n = 0;
	{
		a[i] = 0;
		i--;
	}
	if (i == -1) stop = 1; // náº¿u i == -1 thÃ¬ káº¿t thÃºc
	else a[i] = 1;
}
 
void CTrinh()
{
	stop = 0;
	while (stop == 0)
	{
		Xuat();
		SinhNhiPhan();
	}
}
int main()
{
	cin >> n;
	Nhap();
	CTrinh();
	system("pause");
} 

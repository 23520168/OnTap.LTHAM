#include <iostream>
using namespace std;

int TichCacChuSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tich cac chu so cua " << n << " la: " << TichCacChuSo(n) << endl;
	return 0;
}

int TichCacChuSo(int nn)
{
	int tich = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		tich = tich * dv;
		t = t / 10;
	}
	return tich;
}
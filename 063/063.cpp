#include <iostream>
using namespace std;

int TichCacChuSoLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tich cac chu so le cua " << n << " la: " << TichCacChuSoLe(n) << endl;
	return 0;
}

int TichCacChuSoLe(int nn)
{
	int tich = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			tich = tich * dv;
		t = t / 10;
	}
	return tich;
}
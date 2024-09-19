#include <iostream>
using namespace std;

void DanhSachNamNhuan(int, int);

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;

	int y;
	cout << "Nhap y: ";
	cin >> y;

	cout << "Danh sach nam nhuan: " << endl;
	DanhSachNamNhuan(x, y);

	return 0;
}

void DanhSachNamNhuan(int xx, int yy)
{
	int nn = xx;
	while (nn <= yy)
	{
		bool dk1 = ((nn % 4 == 0) && (nn % 100 != 0));
		bool dk2 = (nn % 400 == 0);
		if (dk1 || dk2)
			cout << nn << endl;
		nn++;
	}
}
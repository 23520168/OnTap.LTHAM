#include <iostream>
using namespace std;

int KiemTraTamGiac(float, float, float);

int main()
{
	float x, y, z;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
	if (KiemTraTamGiac(x, y, z) == 1)
		cout << "Ton tai tam giac!!!" << endl;
	else
		cout << "Khong ton tai tam giac!!!" << endl;
	return 0;
}

int KiemTraTamGiac(float xx, float yy, float zz)
{
	if ((xx + yy > zz) && (yy + zz > xx) && (xx + zz > yy))
		return 1;
	return 0;
}
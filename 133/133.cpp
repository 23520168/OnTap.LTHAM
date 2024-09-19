#include <iostream>
using namespace std;

void XuLy(float, float, float);

int main()
{
	float x, y, z;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
	XuLy(x, y, z);
	return 0;
}

void XuLy(float xx, float yy, float zz)
{
	if ((xx + yy > zz) && (yy + zz > xx) && (xx + zz > yy))
	{
		if ((xx == yy) && (yy == zz))
			cout << "Tam giac deu!!!" << endl;
		else
		{
			if ((xx * xx + yy * yy == zz * zz) || (yy * yy + zz * zz == xx * xx) || (zz * zz + xx * xx == yy * yy))
			{
				if ((xx == yy) || (yy == zz) || (zz == xx))
					cout << "Tam giac vuong can!!!" << endl;
				else
					cout << "Tam giac vuong!!!" << endl;
			}
			else
			{
				if ((xx == yy) || (yy == zz) || (zz == xx))
					cout << "Tam giac can!!!" << endl;
				else
					cout << "Tam giac thuong!!!" << endl;
			}
		}
	}
	else
		cout << "Khong ton tai tam giac!!!" << endl;
}
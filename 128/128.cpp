#include <iostream>
using namespace std;

void Nhap(float&, float&);
void XuLy(float&, float&);
void Xuat(float, float);

int main()
{
	float a, b;
	Nhap(a, b);
	Xuat(a, b);
	cout << "Sap xep tang dan: " << endl;
	XuLy(a, b);
	return 0;
}

void Nhap(float& aa, float& bb)
{
	cout << "Nhap a: ";
	cin >> aa;
	cout << "Nhap b: ";
	cin >> bb;
}

void XuLy(float& aa, float& bb)
{
	float temp;
	if (aa > bb)
	{
		temp = aa;
		aa = bb;
		bb = temp;
	}
	cout << aa << " " << bb << endl;
}

void Xuat(float aa, float bb)
{
	cout << "a = " << aa << endl;
	cout << "b = " << bb << endl;
}
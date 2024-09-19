#include <iostream>
using namespace std;

void Nhap(float&, float&);
void XuLy(float&, float&);
void Xuat(float, float);

int main()
{
	float a, b;
	Nhap(a, b);
	cout << "Truoc khi xu ly: " << endl;
	Xuat(a, b);
	XuLy(a, b);
	cout << "Sau khi xu ly: " << endl;
	Xuat(a, b);
	return 0;
}

void Nhap(float& aa,float& bb)
{
	cout << "Nhap a: ";
	cin >> aa;
	cout << "Nhap b: ";
	cin >> bb;
}

void XuLy(float& aa, float& bb)
{
	if (aa < 0)
		aa = -aa;
	if (bb < 0)
		bb = -bb;
}

void Xuat(float aa, float bb)
{
	cout << "a = " << aa << endl;
	cout << "b = " << bb << endl;
}
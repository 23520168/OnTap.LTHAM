#include <iostream>
using namespace std;

void Nhap(float&, float&, float&);
void XuLy(float&, float&, float&);
void Xuat(float, float, float);

int main()
{
	float a, b, c;
	Nhap(a, b, c);
	Xuat(a, b, c);
	cout << "Sap xep tang dan: " << endl;
	XuLy(a, b, c);
	return 0;
}

void Nhap(float& aa, float& bb, float& cc)
{
	cout << "Nhap a: ";
	cin >> aa;
	cout << "Nhap b: ";
	cin >> bb;
	cout << "Nhap c: ";
	cin >> cc;
}

void XuLy(float& aa, float& bb, float& cc)
{
	if (aa > bb)
	{
		float temp1 = aa;
		aa = bb;
		bb = temp1;
	}
	if (bb > cc)
	{
		float temp2 = bb;
		bb = cc;
		cc = temp2;
	}
	if (aa > cc)
	{
		float temp3 = aa;
		aa = cc;
		cc = temp3;
	}
	cout << aa << " " << bb << " " << cc << endl;
}

void Xuat(float aa, float bb, float cc)
{
	cout << "a = " << aa << endl;
	cout << "b = " << bb << endl;
	cout << "c = " << cc << endl;
}
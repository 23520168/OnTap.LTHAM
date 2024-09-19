#include <iostream>
using namespace std;

void Nhap(float&, float&);
float TimMin(float, float);
void Xuat(float, float);

int main()
{
	float a, b;
	Nhap(a, b);
	Xuat(a, b);
	cout << "Gia tri nho nhat la: " << TimMin(a, b);
	return 0;
}

void Nhap(float& aa, float& bb)
{
	cout << "Nhap a: ";
	cin >> aa;
	cout << "Nhap b: ";
	cin >> bb;
}

float TimMin(float aa, float bb)
{
	float lc = aa;
	if (lc > bb)
		lc = bb;
	return lc;
}

void Xuat(float aa, float bb)
{
	cout << "a = " << aa << endl;
	cout << "b = " << bb << endl;
}
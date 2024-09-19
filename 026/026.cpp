#include <iostream>
using namespace std;

void Nhap(int&, int&);
void HoanVi(int&, int&);
void Xuat(int, int);

int main()
{
	int a, b;
	Nhap(a, b);

	cout << "Truoc khi hoan vi: " << endl;
	Xuat(a, b);

	HoanVi(a, b);

	cout << "Sau khi hoan vi: " << endl;
	Xuat(a, b);

	return 0;
}

void Nhap(int& aa, int& bb)
{
	cout << "Nhap a: ";
	cin >> aa;
	cout << "Nhap b: ";
	cin >> bb;
}

void HoanVi(int& aa, int& bb)
{
	aa = aa + bb;
	bb = aa - bb;
	aa = aa - bb;
}

void Xuat(int aa, int bb)
{
	cout << "a = " << aa << endl;
	cout << "b = " << bb << endl;
}
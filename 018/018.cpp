#include <iostream>
using namespace std;

float Tinhx12(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "x^12 = " << Tinhx12(x) << endl;
	return 0;
}

float Tinhx12(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	return x4 * x8;
}
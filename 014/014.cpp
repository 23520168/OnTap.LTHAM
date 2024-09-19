#include <iostream>
using namespace std;

float Tinhx32(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "x^32 = " << Tinhx32(x) << endl;
	return 0;
}

float Tinhx32(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x16 = x8 * x8;
	float x32 = x16 * x16;
	return x32;
}
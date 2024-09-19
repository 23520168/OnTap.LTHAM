#include <iostream>
using namespace std;

float Tinhx15(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "x^15 = " << Tinhx15(x) << endl;
	return 0;
}

float Tinhx15(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x12 = x4 * x8;
	float x3 = x2 * xx;
	return x12 * x3;
}

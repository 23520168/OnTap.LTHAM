#include <iostream>
using namespace std;

float Tinhx11(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "x^11 = " << Tinhx11(x) << endl;
	return 0;
}

float Tinhx11(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x12 = x4 * x8;
	return x12/xx;
}
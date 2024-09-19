#include <iostream>
using namespace std;

float Tinhx7(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "x^7 = " << Tinhx7(x) << endl;
	return 0;
}

float Tinhx7(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x7 = x8 / xx;
	return x7;
}
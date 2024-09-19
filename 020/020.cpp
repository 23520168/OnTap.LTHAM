#include <iostream>
using namespace std;

float Tinhx14(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "x^14 = " << Tinhx14(x) << endl;
	return 0;
}

float Tinhx14(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x12 = x4 * x8;
	return x12 * x2;
}

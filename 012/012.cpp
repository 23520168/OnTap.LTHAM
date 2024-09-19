#include <iostream>
using namespace std;

float Tinhx6(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "x^6 = " << Tinhx6(x) << endl;
	return 0;
}

float Tinhx6(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x6 = x2 * x4;
	return x6;
}
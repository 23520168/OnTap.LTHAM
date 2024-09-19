#include <iostream>
using namespace std;

float Cos(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "cos(" << x << ") = " << Cos(x) << endl;
	return 0;
}

float Cos(float xx)
{
	xx = (xx * 3.14) / 180;
	float t = 1;
	int m = 1;
	float s = 1;
	float e = 1;
	int dau = -1;
	int i = 2;
	while (e >= 0.000001)
	{
		m = m * i * (i - 1);
		t = t * xx * xx;
		e = (float)t / m;
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	return s;
}
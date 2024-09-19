#include <iostream>
using namespace std;

float Sin(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "sin(" << x << ") = " << Sin(x) << endl;
	return 0;
}

float Sin(float xx)
{
	xx = (xx * 3.14) / 180;
	float t = xx;
	int m = 1;
	float s = xx;
	float e = xx;
	int dau = -1;
	int i = 3;
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
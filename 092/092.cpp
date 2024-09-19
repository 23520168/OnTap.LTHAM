#include <iostream>
using namespace std;

float Tong(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "S(" << x << "," << n << ") = " << Tong(x, n) << endl;
	return 0;
}

float Tong(float xx, int nn)
{
	float t = xx;
	int m = 1;
	float s = 1 - xx;
	int dau = 1;
	int i = 3;
	while (i <= nn * 2 + 1)
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		s = s + (float)(dau * t) / m;
		i = i + 2;
		dau = -dau;
	}
	return s;
}
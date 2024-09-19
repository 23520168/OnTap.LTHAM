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
	float t = 1;
	int m = 1;
	float s = 0;
	int dau = -1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		m = m * i;
		s = s + (float)(dau * t) / m;
		i = i + 1;
		dau = -dau;
	}
	return s;
}
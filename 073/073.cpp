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
	int t = 1;
	int m = 0;
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		m = m + i;
		s = s + (float)t / m;
		i = i + 1;
	}
	return s;
}
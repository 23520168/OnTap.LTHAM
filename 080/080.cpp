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
	float s = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		s = s + (i + 1) * t;
		i = i + 1;
	}
	return s;
}
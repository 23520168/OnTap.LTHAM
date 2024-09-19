#include <iostream>
using namespace std;

float LuyThua(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << x << "^" << n << " = " << LuyThua(x, n) << endl;
	return 0;
}

float LuyThua(float xx, int nn)
{
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		i = i + 1;
	}
	return t;
}
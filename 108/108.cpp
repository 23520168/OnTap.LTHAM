#include <iostream>
using namespace std;

float TinhLuyThuaCuae(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "e^" << x << " = " << TinhLuyThuaCuae(x) << endl;
	return 0;
}

float TinhLuyThuaCuae(float xx)
{
	float t = 1;
	int m = 1;
	float s = 1;
	float e = 1;
	int i = 1;
	while (e >= 0.000001)
	{
		m = m * i;
		t = t * xx;
		e = (float)t / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}
#include <iostream>
using namespace std;

float Tinhpi();

int main()
{
	cout << "pi = " << Tinhpi() << endl;
	return 0;
}

float Tinhpi()
{
	float s = 0;
	float e = 4;
	int dau = 1;
	int i = 1;
	while (e >= 0.000001)
	{
		e = (float)4 / i;
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	return s;
}
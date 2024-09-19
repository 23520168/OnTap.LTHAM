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
	float s = 3;
	float e = 3;
	int dau = 1;
	int i = 2;
	while (e >= 0.000001)
	{
		e = (float)4 / (i * (i + 1) * (i + 2));
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	return s;
}
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
	float s = 4 - 2 / 4 - 1 / 5 - 1 / 6;
	float e = 1;
	int t = 1;
	int i = 1;
	while (e >= 0.000001)
	{
		t = t * 16;
		e = (float)(4 / (8 * i + 1) - 2 / (8 * i + 4) - 1 / (8 * i + 5) - 1 / (8 * i + 6));
		s = s + e;
		i = i + 1;
	}
	return s;
}
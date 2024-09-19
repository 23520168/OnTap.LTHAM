#include <iostream>
using namespace std;

float Tong();

int main()
{
	cout << "S(n) = " << Tong() << endl;
	return 0;
}

float Tong()
{
	int m = 0;
	float s = 0;
	float e = 1;
	int i = 1;
	while (e >= 0.000001)
	{
		m = m + i;
		e = (float)1 / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}
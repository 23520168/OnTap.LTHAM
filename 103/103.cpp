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
	float s = 0;
	float e = 1;
	int i = 1;
	while (e >= 0.000001)
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 2;
	}
	return s;
}
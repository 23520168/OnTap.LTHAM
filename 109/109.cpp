#include <iostream>
using namespace std;

float Tinhe();

int main()
{
	cout << "e = " << Tinhe() << endl;
	return 0;
}

float Tinhe()
{
	int m = 1;
	float s = 1;
	float e = 1;
	int i = 1;
	while (e >= 0.000001)
	{
		m = m * i;
		e = (float)1 / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}
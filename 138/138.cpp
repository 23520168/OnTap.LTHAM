#include <iostream>
using namespace std;

int f(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "f(" << x << ") = " << f(x) << endl;
	return 0;
}

int f(float xx)
{
	int f;
	if (xx >= 0)
	{
		if (xx <= 1)
			f = 5 * xx - 7;
		else
			f = -2 * xx * xx * xx + 5 * xx * xx - 8 * xx + 3;
	}
	else
		f = -2 * xx * xx * xx + 6 * xx + 9;
	return f;
}
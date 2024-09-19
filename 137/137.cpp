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
	if (xx >= 5)
		f = 2 * xx * xx + 5 * xx + 9;
	else
		f = -2 * xx * xx + 4 * xx - 9;
	return f;
}
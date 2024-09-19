#include <iostream>
using namespace std;

int Tinha_n(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "a" << n << " = " << Tinha_n(n) << endl;
	return 0;
}

int Tinha_n(int nn)
{
	int at = -2;
	int i = 2;
	int tt = 3;
	int pp = 7;
	int ahh;
	while (i <= nn)
	{
		tt = tt * 3;
		pp = pp * 7;
		ahh = 5 * at + 2 * tt - 6 * pp + 12;
		i++;
		at = ahh;
	}
	return ahh;
}
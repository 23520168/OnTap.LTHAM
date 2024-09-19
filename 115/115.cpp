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
	int at = 3;
	int att = -1;
	int i = 2;
	int ahh;
	while (i <= nn)
	{
		ahh = 5 * at + 6 * att;
		i++;
		at = ahh;
		att = at;
	}
	return ahh;
}
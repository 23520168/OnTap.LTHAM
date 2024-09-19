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
	int t = 2;
	int i = 2;
	int ahh;
	while (i <= nn)
	{
		t = t * 2;
		ahh = 5 * t + 5 * at - att;
		i++;
		at = ahh;
		att = at;
	}
	return ahh;
}
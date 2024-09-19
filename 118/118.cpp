#include <iostream>
using namespace std;

float Tinha_n(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "a" << n << " = " << Tinha_n(n) << endl;
	return 0;
}

float Tinha_n(int nn)
{
	int at = 2;
	int i = 2;
	float ahh;
	while (i <= nn)
	{
		ahh = (float)(-9 * at + 24) / (5 * at + 13);
		i++;
		at = ahh;
	}
	return ahh;
}
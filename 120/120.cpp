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
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i++;
		at = ahh;
	}
	return ahh;
}
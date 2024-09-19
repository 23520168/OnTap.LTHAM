#include <iostream>
using namespace std;

void Tinha_n(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	Tinha_n(n);
	return 0;
}

void Tinha_n(int nn)
{
	int at = 1;
	int bt = 1;
	int i = 2;
	int ahh;
	int bhh;
	while (i <= nn)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << "a" << nn << " = " << ahh << endl;
	cout << "b" << nn << " = " << bhh << endl;
}
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
	int at = 2;
	int bt = 1;
	int i = 2;
	int ahh;
	int bhh;
	while (i <= nn)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << "a" << nn << " = " << ahh << endl;
	cout << "b" << nn << " = " << bhh << endl;
}
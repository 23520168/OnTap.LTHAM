#include <iostream>
using namespace std;

int GiaiThua(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << n << "! = " << GiaiThua(n) << endl;
	return 0;
}

int GiaiThua(int nn)
{
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		i = i + 1;
	}
	return t;
}
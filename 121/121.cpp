#include <iostream>
using namespace std;

int Tinhf_n(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "a" << n << " = " << Tinhf_n(n) << endl;
	return 0;
}

int Tinhf_n(int nn)
{
	int ft = 1;
	int ftt = 1;
	int i = 2;
	int fhh;
	while (i <= nn)
	{
		fhh = ft + ftt;
		i++;
		ft = fhh;
		ftt = ft;
	}
	return ftt;
}
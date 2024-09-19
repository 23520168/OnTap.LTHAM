#include <iostream>
using namespace std;

void TimSoDaoNguoc(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	TimSoDaoNguoc(n);

	return 0;
}

void TimSoDaoNguoc(int nn)
{
	int dt = abs(nn);
	int dn = 0;
	while (dt!=0)
	{
		int dv = dt % 10;
		dn = dn * 10 + dv;
		dt = dt / 10;
	}
	cout << "So dao nguoc la: " << dn << endl;
}

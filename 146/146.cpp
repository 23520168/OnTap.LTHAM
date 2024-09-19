#include <iostream>
using namespace std;

int ktDoiXung(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktDoiXung(n) == 1)
		cout << n << " la so doi xung!!!" << endl;
	else
		cout << n << " khong la so doi xung!!!" << endl;
	return 0;
}

int ktDoiXung(int nn)
{
	int dt = abs(nn);
	int dn = 0;
	while (dt != 0)
	{
		int dv = dt % 10;
		dn = dn * 10 + dv;
		dt = dt / 10;
	}
	if (dn == nn)
		return 1;
	return 0;
}

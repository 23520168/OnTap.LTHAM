#include <iostream>
using namespace std;

int ktToanLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktToanLe(n) == 1)
		cout << n << " la so toan le!!!" << endl;
	else
		cout << n << " khong la so toan le!!!" << endl;
	return 0;
}

int ktToanLe(int nn)
{
	int dt = abs(nn);
	int flag = 1;
	while (dt != 0)
	{
		int dv = dt % 10;
		if (dv % 2 == 0)
			flag = 0;
		dt = dt / 10;
	}
	if (flag == 1)
		return 1;
	return 0;
}

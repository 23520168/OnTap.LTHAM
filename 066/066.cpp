#include <iostream>
using namespace std;

int ktTonTaiChuSoChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktTonTaiChuSoChan(n) == 1)
		cout << n << " ton tai chu so chan!!!" << endl;
	else
		cout << n << " khong ton tai chu so chan!!!" << endl;
	return 0;
}

int ktTonTaiChuSoChan(int nn)
{
	int flag = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 1;
		t = t / 10;
	}
	return flag;
}
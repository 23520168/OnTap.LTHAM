#include <iostream>
using namespace std;

int KiemTraNamNhuan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (KiemTraNamNhuan(n) == 1)
		cout << n << " la nam nhuan!!!" << endl;
	else
		cout << n << " khong la nam nhuan!!!" << endl;
	return 0;
}

int KiemTraNamNhuan(int nn)
{
	bool dk1 = ((nn % 4 == 0) && (nn % 100 != 0));
	bool dk2 = (nn % 400 == 0);
	if (dk1 || dk2)
		return 1;
	return 0;
}
#include <iostream>
using namespace std;

int ChuSoHangDonVi(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Chu so hang don vi la: " << ChuSoHangDonVi(n) << endl;
	return 0;
}

int ChuSoHangDonVi(int nn)
{
	return nn%10;
}

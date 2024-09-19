#include <iostream>
using namespace std;

int ChuSoHangChuc(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Chu so hang chuc la: " << ChuSoHangChuc(n) << endl;
	return 0;
}

int ChuSoHangChuc(int nn)
{
	return (nn/10) % 10;
}

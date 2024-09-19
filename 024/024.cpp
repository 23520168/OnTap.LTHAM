#include <iostream>
using namespace std;

int ChuSoHangTram(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Chu so hang tram la: " << ChuSoHangTram(n) << endl;
	return 0;
}

int ChuSoHangTram(int nn)
{
	return (nn / 100) % 10;
}

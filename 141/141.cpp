#include <iostream>
using namespace std;

void TimChuSoDauTien(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	TimChuSoDauTien(n);

	return 0;
}

void TimChuSoDauTien(int nn)
{
	int dt = abs(nn);
	while (dt >= 10)
	{
		dt = dt / 10;
	}
	cout << "Chu so dau tien la: " << dt << endl;
}

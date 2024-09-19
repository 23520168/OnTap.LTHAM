#include <iostream>
using namespace std;

int SoLuongUocSoChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So luong uoc so chan cua " << n << " la: " << SoLuongUocSoChan(n) << endl;
	return 0;
}

int SoLuongUocSoChan(int nn)
{
	int dem = 0;
	int i = 2;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i = i + 2;
	}
	return dem;
}
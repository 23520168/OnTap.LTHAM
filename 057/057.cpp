#include <iostream>
using namespace std;

int TongUocSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong cac uoc so be hon " << n << " la: " << TongUocSo(n) << endl;
	return 0;
}

int TongUocSo(int nn)
{
	int s = 0;
	int i = 1;
	while (i < nn)
	{
		if (nn % i == 0)
			s = s + i;
		i = i + 1;
	}
	return s;
}
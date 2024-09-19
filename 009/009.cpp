#include <iostream>
using namespace std;

float DienTich(int, float);

int main()
{
	int n;
	cout << "Nhap so canh: ";
	cin >> n;

	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;

	cout << "Dien tich da giac n canh la: " << DienTich(n, r) << endl;
	return 0;
}

float DienTich(int nn, float rr)
{
	return nn * rr * rr * sin(2 * 3.14 / nn) / 2;
}
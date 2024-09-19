#include <iostream>
using namespace std;

float DienTich(float);

int main()
{
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;

	cout << "Dien tich duong tron la: " << DienTich(r) << endl;
	return 0;
}

float DienTich(float rr)
{
	return 3.14 * rr * rr;
}
#include <iostream>
using namespace std;

float DienTich(float);

int main()
{
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;

	cout << "Dien tich xung quanh hinh cau la: " << DienTich(r) << endl;
	return 0;
}

float DienTich(float rr)
{
	return 4 * 3.14 * rr * rr;
}
#include <iostream>
using namespace std;

int XuLy(float, float, float);

int main()
{
	float x, y, z;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
	if (XuLy(x, y, z) == 1)
		cout << "Bat dang thuc dung!!!" << endl;
	else
		cout << "Bat dang thuc sai!!!" << endl;
	return 0;
}

int XuLy(float xx, float yy, float zz)
{
	if (xx <= yy && yy <= zz)
		return 1;
	return 0;
}
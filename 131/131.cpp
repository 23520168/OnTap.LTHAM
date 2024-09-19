#include <iostream>
using namespace std;

void Nhap(float&, float&);
float KhoangCach(float, float, float, float);
int KiemTraTamGiac(float, float, float, float, float, float);
void Xuat(float, float);

int main()
{
	cout << "Nhap toa do 3 diem trong tam giac: " << endl;
	float xA, yA;
	Nhap(xA, yA);

	float xB, yB;
	Nhap(xB, yB);

	float xC, yC;
	Nhap(xC, yC);

	cout << "Diem thu nhat: " << endl;
	Xuat(xA, yA);

	cout << "Diem thu 2: " << endl;
	Xuat(xB, yB);

	cout << "Diem thu ba: " << endl;
	Xuat(xC, yC);

	if (KiemTraTamGiac(xA, yA, xB, yB, xC, yC) == 1)
		cout << "Ton tai tam giac!!!" << endl;
	else
		cout << "Khong ton tai tam giac!!!" << endl;
	return 0;
}

void Nhap(float& xx, float& yy)
{
	cout << "Nhap hoanh do: ";
	cin >> xx;
	cout << "Nhap tung do: ";
	cin >> yy;
}

float KhoangCach(float xxA, float yyA, float xxB, float yyB)
{
	return sqrt((xxB - xxA) * (xxB - xxA) + (yyB - yyA) * (yyB - yyA));
}

int KiemTraTamGiac(float xA, float yA, float xB, float yB, float xC, float yC)
{
	float a = KhoangCach(xA, yA, xB, yB);
	float b = KhoangCach(xB, yB, xC, yC);
	float c = KhoangCach(xC, yC, xA, yA);
	if ((a + b > c) && (b + c > a) && (c + a > b))
		return 1;
	return 0;
}


void Xuat(float xx, float yy)
{
	cout << "Hoanh do: " << xx << endl;
	cout << "Tung do: " << yy << endl;
}
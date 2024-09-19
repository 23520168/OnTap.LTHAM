#include <iostream>
using namespace std;

void Nhap(float&, float&);
float KhoangCach(float, float, float, float);
int KiemTra(float, float, float, float, float, float, float, float);
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

	float xM, yM;
	cout << "Nhap toa do diem M: " << endl;
	Nhap(xM, yM);

	if (KiemTra(xA, yA, xB, yB, xC, yC, xM, yM) == 1)
		cout << "M nam trong tam giac!!!" << endl;
	else
		cout << "M trong nam trong tam giac!!!" << endl;
	return 0;
}

void Nhap(float& xx, float& yy)
{
	cout << "Nhap hoanh do: ";
	cin >> xx;
	cout << "Nhap tung do: ";
	cin >> yy;
}

int KiemTra(float xA, float yA, float xB, float yB, float xC, float yC, float xM, float yM)
{
	float SABC = abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC) / 2;
	float SMAB = abs(xA * yB + xB * yM + xM * yA - xB * yA - xM * yB - xA * yM) / 2;
	float SMBC = abs(xM * yB + xB * yC + xC * yM - xB * yM - xC * yB - xM * yC) / 2;
	float SMAC = abs(xA * yM + xM * yC + xC * yA - xM * yA - xC * yM - xA * yC) / 2;
	float S = SMAB + SMBC + SMAC;
	if (S == SABC)
		return 1;
	return 0;
}
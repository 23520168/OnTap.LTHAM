#include <iostream>
using namespace std;

void GiaiPTBac2(float, float, float);

int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;

	float b;
	cout << "Nhap b: ";
	cin >> b;

	float c;
	cout << "Nhap c: ";
	cin >> c;

	GiaiPTBac2(a, b, c);

	return 0;
}

void GiaiPTBac2(float aa, float bb, float cc)
{
	float delta = bb * bb - 4 * aa * cc;
	if (delta <= 0)
	{
		if (delta == 0)
		{
			float x0 = -bb / (2 * aa);
			cout << "Phuong trinh co nghiem kep!!!" << endl;
			cout << "x0 = " << x0 << endl;
		}
		else
			cout << "Phuong trinh vo nghiem!!!" << endl;
	}
	else
	{
		float x1 = (-bb + sqrt(delta)) / (2 * aa);
		float x2 = (-bb - sqrt(delta)) / (2 * aa);
		cout << "Phuong trinh co 2 nghiem phan biet!!!" << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
}

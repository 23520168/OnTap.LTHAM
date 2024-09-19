#include <iostream>
using namespace std;

void GiaiPTBac1(float, float);

int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;

	float b;
	cout << "Nhap b: ";
	cin >> b;

	GiaiPTBac1(a, b);

	return 0;
}

void GiaiPTBac1(float aa, float bb)
{
	if (aa == 0)
	{
		if (bb == 0)
		{
			cout << "Phuong trinh co vo so nghiem!!!" << endl;
		}
		else
			cout << "Phuong trinh vo nghiem!!!" << endl;
	}
	else
	{
		float x = -bb / aa;
		cout << "x = " << x << endl;
	}
}
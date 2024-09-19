#include <iostream>
using namespace std;

float ChuVi(int, float);

int main()
{
	int n;
	cout << "Nhap so canh: ";
	cin >> n;

	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;

	cout << "Chu vi da giac deu n canh la: " << ChuVi(n, r) << endl;
	return 0;
}

float ChuVi(int nn, float rr)
{
	return 2 * nn * rr * sin(3.14 / nn);
}
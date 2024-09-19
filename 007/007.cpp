#include <iostream>
using namespace std;

float DoC(float);

int main()
{
	float f;
	cout << "Nhap do F: ";
	cin >> f;

	cout << "Do C: " << DoC(f) << endl;
	return 0;
}

float DoC(float ff)
{
	return (5 * (ff - 32)) / 9;
}
#include <iostream>
using namespace std;

float DoF(float);

int main()
{
	float c;
	cout << "Nhap do C: ";
	cin >> c;

	cout << "Do F: " << DoF(c) << endl;
	return 0;
}

float DoF(float cc)
{
	return (9*cc)/5 + 32;
}
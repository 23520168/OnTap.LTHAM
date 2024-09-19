#include <iostream>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "S(n) = " << Tong(n) << endl;
	return 0;
}

float Tong(int nn)
{
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * (1 + (float)1 / (i * i));
		i = i + 1;
	}
	return t;
}
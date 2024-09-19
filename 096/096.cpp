#include <iostream>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "S(" << n << ") = " << Tong(n) << endl;
	return 0;
}

float Tong(int nn)
{
	int t = 1;
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		s = sqrt(t + s);
		i++;
	}
	return s;
}
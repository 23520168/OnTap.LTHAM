#include <iostream>
using namespace std;

int Tong(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "S(" << x << "," <<n<<") = " << Tong(x,n) << endl;
	return 0;
}

int Tong(float xx, int nn)
{
	int t = 1;
	int s = 0;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		s = s + t;
		i = i + 1;
	}
	return s;
}
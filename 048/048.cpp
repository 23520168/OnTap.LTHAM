#include <iostream>
using namespace std;

int S(float,int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "S(" << x << "," << n << ") = " << S(x, n) << endl;
	return 0;
}

int S(float xx,int nn)
{
	int t = xx;
	int i = 1;
	while (i <= nn)
	{
		t = t * (xx + i);
		i = i + 1;
	}
	return t;
}
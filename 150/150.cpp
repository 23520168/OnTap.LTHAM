#include <iostream>
using namespace std;

int BoiChungNhoNhat(int, int);

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;

	int b;
	cout << "Nhap b: ";
	cin >> b;

	cout << "Boi chung nho nhat la: " << BoiChungNhoNhat(a, b) << endl;
	return 0;
}

int BoiChungNhoNhat(int aa, int bb)
{
	int m = abs(aa);
	int n = abs(bb);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	return abs(aa*bb)/(m+n);
}

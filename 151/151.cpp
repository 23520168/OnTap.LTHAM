#include <iostream>
using namespace std;

int ktDang(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktDang(n) == 1)
		cout << n << " co dang 2^m!!!" << endl;
	else
		cout << n << " khong co dang 2^m!!!" << endl;
	return 0;
}

int ktDang(int nn)
{
	int t = nn;
	int flag = 1;
	while (t > 1)
	{
		int du = t % 2;
		if (du % 2 != 0)
			flag = 0;
		t = t / 2;
	}
	if (flag == 1)
		return 1;
	return 0;
}

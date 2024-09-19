#include <iostream>
using namespace std;

int ktHoanThien(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktHoanThien(n) == 1)
		cout << n << " la so hoan thien!!!" << endl;
	else
		cout << n << " khong la so hoan thien!!!" << endl;
	return 0;
}

int ktHoanThien(int nn)
{
	int s = 0;
	int i = 1;
	while (i < nn)
	{
		if (nn % i == 0)
			s = s + i;
		i++;
	}
	if (s == nn)
		return 1;
	else
		return 0;
}
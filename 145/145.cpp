#include <iostream>
using namespace std;

int ktChinhPhuong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktChinhPhuong(n) == 1)
		cout << n << " la so chinh phuong!!!" << endl;
	else
		cout << n << " khong la so chinh phuong!!!" << endl;
	return 0;
}

int ktChinhPhuong(int nn)
{
	int flag = 1;
	int i = 0;
	while (i <= nn)
	{
		if (nn == (i * i))
			flag = 1;
		i++;
	}
	return flag;
}

#include <iostream>
using namespace std;

int TongCacChuSoChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong cac chu so chan cua " << n << " la: " << TongCacChuSoChan(n) << endl;
	return 0;
}

int TongCacChuSoChan(int nn)
{
	int s = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if(dv%2==0)
			s = s + dv;
		t = t / 10;
	}
	return s;
}
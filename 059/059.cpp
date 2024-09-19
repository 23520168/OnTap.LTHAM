#include <iostream>
using namespace std;

int SoCacChuSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So cac chu so cua " << n << " la: " << SoCacChuSo(n) << endl;
	return 0;
}

int SoCacChuSo(int nn)
{
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		dem++;
		t = t / 10;
	}
	return dem;
}
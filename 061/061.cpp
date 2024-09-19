#include <iostream>
using namespace std;

int SoCacChuSoLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So cac chu so le cua " << n << " la: " << SoCacChuSoLe(n) << endl;
	return 0;
}

int SoCacChuSoLe(int nn)
{
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		if(t%2!=0)
			dem++;
		t = t / 10;
	}
	return dem;
}
// Lab_05_3.cpp
// Вольвенко Іван
// Лабораторна робота № 5.3
// Функції, що містять розгалуження та цикли з рекурентними співвідношеннями
// Варіант 13

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double g(const double x);

int main()
{
	double zp, zk, c;
	int n;

	cout << "zp = "; cin >> zp;
	cout << "zk = "; cin >> zk;
	cout << "n = "; cin >> n;

	double dz = (zk - zp) / n;
	double z = zp;
	while (z <= zk)
	{
		c = g(2 * z) + (pow(g(2 * z + z * z), 2)) + g(1.5);
		cout << z << "  " << c << endl;
		z += dz;
	}
	return 0;
}

double g(const double x)
{
	if (abs(x) >= 1)
		return (sin(x) / (cos(x) + 2));
	else
	{
		double S = 0;
		int n = 0;
		double a = 1;
		S = a;
		do {
			n++;
			double R = (x * x) / n;
			a *= R;
			S += a;
		} while (n < 6);
		return S;
	}
}
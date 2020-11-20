#include <iostream>

using namespace std;

double my_pow(double x, unsigned int n);

int main()
{
	double x, res;
	int n;

	cout << "Введите число: ";
	cin >> x;
	cout << "Введите степень: ";
	cin >> n;

	res = my_pow(x, n);
	cout << "Результат: " << res << endl;

	return 0;
}

double my_pow(double x, unsigned int n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else if (n % 2 == 0)
		return pow(x * x, n / 2);
	else
		return pow(x * x, n / 2) * x;
}
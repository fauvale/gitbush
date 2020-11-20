#include <iostream>

using namespace std;

double my_pow(double x, int n);

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

double my_pow(double x, int n)
{
    double result = 1;
    if (n < 0) {
        n = -n;

        while (n) {
            if (n % 2 == 0) {
                n /= 2;
                x *= x;
            }
            else {
                n--;
                result *= x;
            }
        }

        return 1 / result;
    }
    else {
        while (n) {
            if (n % 2 == 0) {
                n /= 2;
                x *= x;
            }
            else {
                n--;
                result *= x;
            }
        }

        return result;
    }
}
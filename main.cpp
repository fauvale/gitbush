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
    double count = 1;
    if (!n) return 1;
    while (n)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            x *= x;
        }
        else
        {
            n--;
            count *= x;
        }
    }
    return count;
}
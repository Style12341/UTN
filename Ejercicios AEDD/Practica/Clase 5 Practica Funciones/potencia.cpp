#include <iostream>

using namespace std;

int potencia(int base, int exponent)
{
    if (exponent == 1)
    return base;
    return base * potencia(base, exponent - 1);
}
int main()
{
    int base, exp;
    cin >> base >> exp;
    cout << potencia(base, exp);
    return 0;
}
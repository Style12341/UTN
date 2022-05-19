#include<iostream>

    using namespace std;

int binDec(int, int aux = 0);
int cantCifras(int x);
int potencia(int base, int exponent);

int main()
{
    int num;
    cout << "Ingrese un numero..." << endl;
    cin >> num;
    cout << binDec(num);
}

int binDec(int num, int aux)
{
    if (num < 2)
        return num * potencia(2, aux);
    return num % 10 * potencia(2, aux) + binDec(num / 10, ++aux);
}
int cantCifras(int x)
{
    if (x < 10)
        return 1;
    return 1 + cantCifras(x / 10);
}
int potencia(int base, int exponent)
{
    if (exponent == 1)
        return base;
    if (exponent == 0) return 1;
    return base * potencia(base, exponent - 1);
}

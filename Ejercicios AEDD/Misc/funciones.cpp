#include "funciones.h"
#include <iostream>

using namespace std;

float promedio(int cantNum)
{
    float total;
    for (int i = 0; i < cantNum; i++)
    {
        int y;
        cout << "Ingrese el numero " << i + 1 << endl;
        cin >> y;
        total += y;
    }
    total/=cantNum;
    return total;
}
int cifras(int x)
{
    int resultado;
    if (x > 0)
    {
        x /= 10;
        resultado = 1 + cifras(x);
    }
    else
        resultado = 0;
    return resultado;
}
int cantidadDiv(int x)
{
    int cantidad = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
            cantidad++;
    }

    return cantidad;
}
unsigned long long int factorial(int x)
{
    if (x > 0)
        return x * factorial(x - 1);
    else
        return 1;
}
int potencia(int base, int exponent)
{
    if (exponent == 1)
    return base;
    return base * potencia(base, exponent - 1);
}
int mcd(int n1, int n2)
{
    int menor, mayor, resto;
    n1 = abs(n1);
    n2 = abs(n2);
    menor = min(n1, n2);
    mayor = max(n1, n2);

    while (mayor % menor != 0)
    {
        resto = mayor % menor;
        mayor = menor;
        menor = resto;
    }
    return menor;
}
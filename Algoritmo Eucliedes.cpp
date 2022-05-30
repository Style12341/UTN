#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n1, n2, menor, mayor, resto;

    cout << "Ingrese dos numeros para calcular su maximo comun divisor" << endl;
    cin >> n1 >> n2;
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
    cout << "El mayor comun divisor es " << menor << endl;
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
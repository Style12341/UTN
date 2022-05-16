#include <iostream>
#include <cmath>
using namespace std;
int cantidadDiv(int);

int main()
{
    int num;
    cout << "Ingrese un numero entero para calcular sus divisores." << endl;
    cin >> num;
    cout << cantidadDiv(num);
    return 0;
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
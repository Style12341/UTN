#include <iostream>
#include <cmath>
using namespace std;
int cantidadDigitos(int x);
int main()
{
    int num;
    cout << "Ingrese un numero entero para calcular sus cifras" << endl;
    cin >> num;
    cout << cantidadDigitos(num);
    return 0;
}
int cantidadDigitos(int x)
{
    int resultado;
    if (x > 0)
    {
        x /= 10;
        resultado = 1 + cantidadDigitos(x);
    }
    else
        resultado = 0;
    return resultado;
}
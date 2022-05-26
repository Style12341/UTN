#include <iostream>
#include <cmath>
using namespace std;
int cifras(int x);
int main()
{
    int num;
    cout << "Ingrese un numero entero para calcular sus cifras" << endl;
    cin >> num;
    cout << cifras(num);
    return 0;
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
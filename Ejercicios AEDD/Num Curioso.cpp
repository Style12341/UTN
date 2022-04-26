#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int Num, copia;
    cout << "Ingrese la cantidad de numeros enteros" << endl;
    cin >> Num;
    cout << "Los numeros Curiosos son: " << endl;
    for (int i = 1; i <= Num; i++)
    {
        int numcuadrado = i * i;
        int potencia = 1;
        int cifras = 0;
        int copia = i;
        while (copia > 0)
        {
            copia /= 10;
            cifras++;
        }
        for (int j = 0; j < cifras; j++)
        {
            potencia *= 10;
        }
        int ultCifras= numcuadrado%potencia;
        if (ultCifras == i)
        {
            cout << i <<"----"<< numcuadrado << endl;
        }
    }

    system("pause");
    return 0;
}
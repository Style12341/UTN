#include <iostream>
using namespace std;
int main()
{
    unsigned long long int cantidadNum, nX;
    unsigned long long int n0 = 0;
    unsigned long long int n1 = 1;
    do
    {
        cout << "Ingrese cantidad de numeros para calcular la secuencia" << endl;
        cin >> cantidadNum;
    } while (cantidadNum < 3 or cantidadNum > 93);
    cout << n0 << endl
         << n1 << endl;
    for (unsigned long long int i = 1; i < cantidadNum; i++)
    {
        nX = n0 + n1;
        cout << nX << endl;
        n0 = n1;
        n1 = nX;
    }
    system("pause");
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int cantidadFacturas;
    float monto, montoMayor = 0, total = 0;

    cout << "Ingrese la cantidad de facturas a procesar:";
    cin >> cantidadFacturas;
    for (int i = 0; i < cantidadFacturas; i++)
    {
        cout << "Ingrese la factura " << i + 1 << " : ";
        cin >> monto;
        total += monto;
        if (monto > montoMayor)
        {
            montoMayor = monto;
        }
    }
    if (cantidadFacturas != 0)
    {
        cout << "El monto total es de :" << total << endl;
        cout << "El mayor monto ingresado es de :" << montoMayor << endl;
    }
    system("pause");
    return 0;
}
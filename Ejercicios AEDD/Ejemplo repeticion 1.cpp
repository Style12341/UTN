#include <iostream>

using namespace std;

int main()
{
    int cantidadFacturas, facturasProcesadas = 0;
    float monto, montoMayor = 0, montoTotal = 0;
    cout << "Ingrese la cantidad de facturas a procesar" << endl;
    cin >> cantidadFacturas;
    while (facturasProcesadas < cantidadFacturas)
    {
        cout << "Ingrese el monto de la factura" << endl;
        cin >> monto;
        montoTotal += monto;
        if (monto > montoMayor)
        {
            montoMayor = monto;
        }

        facturasProcesadas++;
    }
    cout << "El monto total es de $" << montoTotal << endl;
    cout << "El mayor monto ingresado es de $" << montoMayor << endl;
    system("pause");
    return 0;
}
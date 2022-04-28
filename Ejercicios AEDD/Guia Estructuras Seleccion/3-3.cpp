#include <iostream>

using namespace std;

int main(int argc, char)
{
    int cuotas;
    float monto;
    char metP;
    cout << "Ingrese el monto a pagar" << endl;
    cin >> monto;
    if (monto > 0)
    {
        cout << "Ingrese el metodo de pago (Billetera Santa Fe = b, Credito = c, Debito = d)" << endl;
        cin >> metP;
        if (metP == 'b' || metP == 'B' || metP == 'd' || metP == 'D' || metP == 'c' || metP == 'C')
        {
            if (metP == 'c' || metP == 'C')
            {
                cout << "Ingrese en numero si desea 1 cuota, o 3 con un recargo del 10%" << endl;
                cin >> cuotas;
            }
            cout << "Utilizando ";
            switch (metP)
            {
            case 'b':;
            case 'B':
                monto *= 0.7;
                cout << "Billetera Santa Fe, el monto final es de " << monto << endl;
                break;
            case 'd':;
            case 'D':
                cout << "tarjeta de debito, el monto final es de ";
                if (monto > 3000)
                {
                    monto *= 0.85;
                    cout << monto << " (aplicado 15% de descuento por compra mayor a $3000)" << endl;
                }
                else
                {
                    cout << monto << endl;
                }
                break;
            case 'c':;
            case 'C':
                cout << "tarjeta de credito, el monto final es de ";
                if (cuotas == 3)
                {
                    monto *= 1.1;
                    cuotas = monto / 3;
                    cout << monto << ", en tres cuotas de " << cuotas << endl;
                }
                else
                {
                    cout << monto << endl;
                }
                break;
            }
        }
        else
            cout << "El metodo de pago no es correcto" << endl;
    }
    else
        cout << "El monto ingresado no es valido (es negativo)" << endl;

    system("pause");
    return 0;
}
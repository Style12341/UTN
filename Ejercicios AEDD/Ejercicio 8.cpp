#include <iostream>
using namespace std;

int main()
{
    int edad, categ;
    float cTarjet;
    cout << "Ingresa tu edad en anios" << endl;
    cin >> edad;
    if (edad >= 0) // Si la edad es menor a 0, avisa que la edad ingresada no es valida
    {
        if (edad >= 25)
        {
            cout << "Ingrese su categoria, en caso de no tener, ingrese 0" << endl;
            cin >> categ;
            if (categ >= 0 && categ < 4) // Si la categoria es mayor a 4 o menor a 0, avisa que la categoria no es valida.
            {
                cout << "Con descuento de ";
                if (edad == 25)
                {
                    cTarjet = 20.00;
                    switch (categ)
                    {
                    case 1:
                        cTarjet *= 0.4;
                        cout << "60% ";
                        break;
                    case 2:
                        cTarjet *= 0.6;
                        cout << "40% ";
                        break;
                    case 3:
                        cTarjet *= 0.8;
                        cout << "20% ";
                        break;
                    }
                }
                else
                {
                    cTarjet = 35.00;
                    switch (categ)
                    {
                    case 1:
                        cTarjet *= 0.6;
                        cout << "40% ";
                        break;
                    case 2:
                        cTarjet *= 0.7;
                        cout << "30% ";
                        break;
                    case 3:
                        cTarjet *= 0.85;
                        cout << "15% ";
                        break;
                    }
                }
                cout << "el costo final de la tarjeta es " << cTarjet << endl;
            }
            else
                cout << "La categoria ingresada no es valida" << endl;
        }
        else
            cout << "Los menores de 25 anios no pueden comprar tarjeta" << endl;
    }
    else
        cout << "La edad ingresada no es valida" << endl;
    system("pause");
    return 0;
}

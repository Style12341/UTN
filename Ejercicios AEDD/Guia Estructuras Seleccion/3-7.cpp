#include <iostream>

using namespace std;

int main()
{
    char modelo;
    int tipoM;
    cout << "Ingrese (letra) segun el siguiente listado el modelo del automovil." << endl
         << endl;
    cout << "Modelo B: Base" << endl;
    cout << "Modelo M: Medio" << endl;
    cout << "Modelo P: Plus" << endl
         << endl;
    cin >> modelo;
    if (modelo == 'B' || modelo == 'M' || modelo == 'P' || modelo == 'b' || modelo == 'm' || modelo == 'p')
    {
        cout << "Ingrese el tipo de motor (numero)" << endl
             << endl;
        cout << "Tipo 16" << endl;
        cout << "Tipo 20" << endl
             << endl;
        cin >> tipoM;
        if (tipoM == 16 || tipoM == 20)
        {
            switch (modelo)
            {
            case 'p':;
            case 'P':
                switch (tipoM)
                {
                case 20:
                    cout << "Turbocompresor, ";
                case 16:
                    cout << "Tapizado de Cuero, Llantas de aleación, ";
                }
            case 'm':;
            case 'M':
                switch (tipoM)
                {
                case 20:
                    cout << "Luz de Cortesia, ";
                case 16:
                    cout << "Levanta vidrios electrico, Espejos retractiles, ";
                }
            case 'b':;
            case 'B':
                cout << "Direccion asistida, ABS y Airbags." << endl;
            }
        }
        else
            cout << "El tipo de motor ingresado no es valido" << endl;
    }
    else
        cout << "El modelo ingresado no es valido" << endl;
    system("pause");
    return 0;
}
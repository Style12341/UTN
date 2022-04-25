#include <iostream>
using namespace std;
int main()
{
    int dia, mes;
    cout << "Ingrese el numero del dia de la semana" << endl;
    cin >> dia;
    if (dia > 0 && dia < 8)
    {
        cout << "Ingrese el numero del mes" << endl;
        cin >> mes;
        if (mes > 0 && mes < 13)
        {
            switch (dia)
            {
            case 1:
                cout << "Lunes y ";
                break;
            case 2:
                cout << "Martes y ";
                break;
            case 3:
                cout << "Miercoles y ";
                break;
            case 4:
                cout << "Jueves y ";
                break;
            case 5:
                cout << "Viernes y ";
                break;
            case 6:
                cout << "Sabado y ";
                break;
            case 7:
                cout << "Domingo y ";
                break;
            }
            switch (mes)
            {
            case 1:
                cout << "Enero" << endl;
                break;
            case 2:
                cout << "Febrero" << endl;
                break;
            case 3:
                cout << "Marzo" << endl;
                break;
            case 4:
                cout << "Abril" << endl;
                break;
            case 5:
                cout << "Mayo" << endl;
                break;
            case 6:
                cout << "Junio" << endl;
                break;
            case 7:
                cout << "Julio" << endl;
                break;
            case 8:
                cout << "Agosto" << endl;
                break;
            case 9:
                cout << "Septiembre" << endl;
                break;
            case 10:
                cout << "Octubre" << endl;
                break;
            case 11:
                cout << "Noviembre" << endl;
                break;
            case 12:
                cout << "Diciembre" << endl;
                break;
            }
        }
        else
            cout << "Mes inexistente" << endl;
    }
    else
        cout << "Dia inexistente" << endl;
    system("pause");
    return 0;
}
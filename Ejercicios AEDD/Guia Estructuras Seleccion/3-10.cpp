#include <iostream>

using namespace std;

int main()
{
    int tipoT;
    float valorlado1;
    cout << "Segun las siguientes opciones, indique el tipo de triangulo con el que desea trabajar: " << endl
         << endl;
    cout << "1-Equilatero" << endl;
    cout << "2-Isosceles" << endl;
    cout << "3-Escaleno" << endl;
    cout << "Tipo de triangulo: ";
    cin >> tipoT;
    cout << endl;
    cout << "----------------------------------------------------" << endl
         << endl;
    if (tipoT > 0 && tipoT < 4)
    {
        switch (tipoT)
        {
        case 1:
            cout << "TRIANGULO EQUILATERO" << endl
                 << endl;
            cout << "Ingrese el valor del lado" << endl;
            cout << "Valor del lado: ";
            cin >> valorlado1;
            cout << endl;
            cout << "Perimetro: " << valorlado1 * 3 << endl;
            break;
        case 2:
            float valorlado2;
            cout << "TRIANGULO ISOSCELES" << endl
                 << endl;
            cout << "Ingrese el valor del lado 1" << endl
                 << endl;
            cout << "Valor del lado 1: ";
            cin >> valorlado1;
            cout << endl;
            cout << "Ingrese el valor del lado 2 y 3" << endl
                 << endl;
            cout << "Valor del lado 2 y 3: ";
            cin >> valorlado2;
            cout << endl;
            cout << "Perimetro: " << valorlado2 * 2 + valorlado1 << endl;
            break;
        case 3:
            float valorlado3;
            cout << "TRIANGULO ESCALENO" << endl
                 << endl;
            cout << "Ingrese el valor del lado 1" << endl
                 << endl;
            cout << "Valor del lado 1: ";
            cin >> valorlado1;
            cout << endl;
            cout << "Ingrese el valor del lado 2" << endl
                 << endl;
            cout << "Valor del lado 2: ";
            cin >> valorlado2;
            cout << endl;
            cout << "Ingrese el valor del lado 3" << endl
                 << endl;
            cout << "Valor del lado 3: ";
            cin >> valorlado3;
            cout << endl;
            cout << "Perimetro: " << valorlado1 + valorlado2 + valorlado3 << endl;
            break;
        }
    }
    else
        cout << "El tipo de triangulo ingresado no es valido" << endl;
    system("pause");
    return 0;
}
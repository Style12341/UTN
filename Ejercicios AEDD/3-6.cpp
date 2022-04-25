#include <iostream>

using namespace std;

int main()
{
    int num, cif1, cif2, cif3, cif4, cif5;
    cout << "Ingrese un numero de 5 cifras" << endl;
    cin >> num;
    if (num > 9999 && num < 100000)
    {
        cif1 = num % 10;
        cif2 = (num / 10) % 10;
        cif3 = (num / 100) % 10;
        cif4 = (num / 1000) % 10;
        cif5 = (num / 10000);
        if ((cif1 % 2 == 0 && cif3 % 2 == 0 && cif5 % 2 == 0 && cif2 % 2 == 1 && cif4 % 2 == 1) || (cif1 % 2 == 1 && cif3 % 2 == 1 && cif5 % 2 == 1 && cif2 % 2 == 0 && cif4 % 2 == 0))
        {
            cout << "El numero es alternado" << endl;
        }
        else
            cout << "El numero no es alternado" << endl;
    }
    else
        cout << "El numero ingresado no es de 5 cifras" << endl;
    system("pause");
    return 0;
}
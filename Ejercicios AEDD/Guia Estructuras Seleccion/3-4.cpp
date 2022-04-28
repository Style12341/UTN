#include <iostream>

using namespace std;

int main()
{
    int num, cif2;
    cout << "Ingrese un numero de tres cifras"<<endl;
    cin >> num;
    if (num > 99 && num < 1000)
    {
        cif2 = (num / 10) % 10;
        num -= cif2 * 10;
        if (num % 101 == 0)
        {
            cout << "El numero es capicua" << endl;
        }
        else
            cout << "El numero no es capicua" << endl;
    }
    else
        cout << "El numero no es de tres cifras" << endl;
    system("pause");
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    char dato;
    bool bandera = true;
    cout << "Ingrese un dato" << endl;
    cin >> dato;
    bool esMin = (dato >= 'a' && dato <= 'z');
    bool esNum = (dato >= '0' && dato <= '9');
    bandera = esMin or esNum;
    while (bandera)
    {
        cout << "Ingrese un dato" << endl;
        cin >> dato;
        bandera = esMin or esNum;
    }
    system("pause");
    return 0;
}
#include <iostream>

using namespace std;
int cifras(int x);
bool capicua(int x);
int potencia(int base, int exponent);
bool capicuaAux(int x, int pot);
int main()
{
    int num;
    cout << "Ingrese un numero..." << endl;
    cin >> num;
    cout << capicua(num);
    return 0;
}

bool capicua(int x)
{
    int cifras = cantCifras(x);
    if (x < 10)return true;
    return capicuaAux(x,potencia(10, cifras - 1));
}

bool capicuaAux(int x, int pot){
    if (x < 10)return true;
    if (x /pot != x % 10)return false;
    return capicuaAux((x%pot)/10,pot/100);
}

int cantCifras(int x)
{
    if(x<10)
    return 1;
    return 1 + cantCifras(x / 10);
}
int potencia(int base, int exponent)
{
    if (exponent == 1)
        return base;
    return base * potencia(base, exponent - 1);
}
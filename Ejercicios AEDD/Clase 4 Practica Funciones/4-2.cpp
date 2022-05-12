#include <iostream>
using namespace std;

void cuadrado(int, char);
void tri_sup(int, char);
void tri_inf(int, char);

int main()
{
    int renglones;
    char letra;
    cout << "Ingrese la cantidad de renglones del cuadrado y el caracter con el que lo quiere representar" << endl;
    cin >> renglones >> letra;
    cuadrado(renglones, letra);
    tri_sup(renglones, letra);
    tri_inf(renglones, letra);

    return 0;
}

void cuadrado(int num, char a)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << a << " ";
        }
        cout << endl;
    }
    cout << endl;
    return;
}
void tri_sup(int num, char a)
{
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << a << " ";
        }
        cout << endl;
    }
    cout << endl;
    return;
}

void tri_inf(int num, char a)
{
    for (int i = num; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << a << " ";
        }
        cout << endl;
    }
    cout << endl;
    return;
}
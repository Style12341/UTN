#include <iostream>

using namespace std;

int main()
{
    int n = 13;

    cout << "a:";

    for (int i = 0; i <= n - 1; i++)
    {
        cout << i; //posición de la sucesión - 1 (si p es la posicion i = p-1)
    }

    cout << "\n" << "b: ";

    for (int i = 0; i <= n - 1; i++)
    {
        cout << (i % 8) + 1; //sucesión de perioricidad 8 (numeros del 1 al 8)
    }

    cout << "\n" << "c: ";

    for (int i = 0; i <= n - 1; i++)
    {
        cout << i / 4; //
    }

    cout << "\n" << "d: ";

    for (int i = 0; i <= n - 1; i++)
    {
        cout << (i / 4) % 2; //
    }

    cout << "\n" << "d: ";

    for (int i = 0; i <= n - 1; i++)
    {
        cout << ((i / 4) % 2) * 2 * ((i % 8) - 4); //
    }

    cout << "\n" << "S: ";

    for (int i = 0; i <= n - 1; i++)
    {
        cout << ((i % 8) + 1) - ((i / 4) % 2) * 2 * ((i % 8) - 4);
    }

    /*
    for (int i = 0; i <= n - 1; i++)
    {
        if (i % 8 + 1 <= 4)
        {
            cout << i % 8 + 1;
        }
        else
        {
            cout << 10 - (i % 8 + 1);
        }
        
    }
    */

    return 0;
}
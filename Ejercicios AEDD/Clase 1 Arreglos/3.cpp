#include <iostream>

using namespace std;

int main()
{
    int empleados[10] = {1, 2, 3, 1, 4, 5, 2, 1, 3, 5};
    int cantidad[5] = {0};
    for (int i = 0; i < 10; i++)
    {
        cantidad[empleados[i] - 1]++;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Categoria " << i + 1 << " : " << cantidad[i] << endl;
    }

    return 0;
}
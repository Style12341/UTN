#include <iostream>
using namespace std;
void piramide(int filas, int columnas);
int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int filas, columnas;
    cin >> filas >> columnas;
    piramide(filas, columnas);
    return 0;
}

void piramide(int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return;
}
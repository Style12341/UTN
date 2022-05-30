#include <iostream>
using namespace std;
int producto(int, int);
int productoSuma(int, int);

int main()
{
    int num1, num2;
    cout << "Ingrese dos numeros para multiplicar" << endl;
    cin >> num1 >> num2;
    cout << producto(num1, num2);

    return 0;
}
int producto(int x, int y)
{
    if (x > y)
    {
        return productoSuma(x, y);
    }
    else
        return productoSuma(y, x);
}
int productoSuma(int x, int y)
{
    if (y == 0 or x==0)
        return 0;
    return x + productoSuma(x, y - 1);
}
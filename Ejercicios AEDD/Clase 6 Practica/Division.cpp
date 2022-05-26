#include <iostream>

using namespace std;

bool division(float dividendo, float divisor, float & res);

int main()
{
    float dividendo, divisor, res;
    cout << "Ingrese un el dividendo seguido del divisor" << endl;
    cin >> dividendo >> divisor;
    if (division(dividendo, divisor, res))
        cout << res;
    else
        cout << "No se puede dividir por 0" << endl;
    return 0;
}
bool division(float dividendo, float divisor, float &res)
{
    if (divisor != 0)
        res = dividendo / divisor;
    return divisor != 0;
}
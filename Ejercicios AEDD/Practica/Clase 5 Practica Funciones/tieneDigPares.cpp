#include <iostream>

using namespace std;
bool tieneDigPares(int x);
int main()
{
    int num;
    cout << "Ingrese un numero..." << endl;
    cin >> num;
    cout << tieneDigPares(num);
    return 0;
}

bool tieneDigPares(int x)
{
    if (x < 10 or x % 2 == 0)
        return x % 2 == 0;
    return tieneDigPares(x / 10);
}
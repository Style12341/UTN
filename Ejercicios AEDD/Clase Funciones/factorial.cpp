#include <iostream>
using namespace std;

unsigned long long int factorial(int x)
{

    if (x > 0)
        return x * factorial(x - 1);
    else
        return 1;
}

int main()
{
    int num;
    cout << "Calcular factorial para: ";
    cin >> num;
    cout << factorial(num);

    return 0;
}

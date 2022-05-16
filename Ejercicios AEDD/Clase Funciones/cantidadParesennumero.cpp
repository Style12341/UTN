#include <iostream>
using namespace std;
int cantidadDigitosPares(int);

int main()
{
    int n;
    cin >> n;
    cout << cantidadDigitosPares(n) << endl;
    return 0;
}

int cantidadDigitosPares(int num)
{ 
    if (num==0 ) return 0;
    if (num%2==0) return 1+cantidadDigitosPares(num/10);
    return cantidadDigitosPares(num/10);
}
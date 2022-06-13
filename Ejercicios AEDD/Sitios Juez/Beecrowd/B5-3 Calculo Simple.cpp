#include <iostream>
#include <iomanip>
using namespace std;

double calcularCosto(int cantidad, double precio)
{
    return cantidad*precio;
}

int main()
{
    int codigo,cantidad;
    double precio,total=0;
    cin >> codigo>>cantidad>>precio;
    total+=calcularCosto(cantidad, precio);
    cin >> codigo>>cantidad>>precio;
    total+=calcularCosto(cantidad, precio);
    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << total << endl;
    return 0;
}
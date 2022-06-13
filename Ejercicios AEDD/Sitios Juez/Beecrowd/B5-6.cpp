#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
bool resolvente(double A, double &B, double &C)
{
    bool esPosible = 1;
    if (A != 0)
    {
        double radicando = B * B - 4 * A * C;
        if (radicando >= 0)
        {
            C = (-B + sqrt(radicando)) / (2 * A);
            B = (-B - sqrt(radicando)) / (2 * A);
        }
        else
            esPosible = 0;
    }
    else
        esPosible = 0;
    return esPosible;
}

int main()
{
    double A, B, C;
    cin >> A >> B >> C;
    if (resolvente(A, B, C))
    {
        cout << fixed << setprecision(5) << "R1 = " << C << endl;
        cout << "R2 = " << B << endl;
    }
    else
        cout << "Impossivel calcular" << endl;

    return 0;
}
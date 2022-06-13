#include <iostream>
#include <iomanip>

using namespace std;

double funcionE(int n1, int &n2)
{
    int promedio = 0, counter = 0;
    int n1Aux = n1;
    int start;
    bool flag = true;
    while (flag)
    {
        if (n1Aux % 10 == 0)
        {
            start = n1Aux;
            flag = false;
        }
        else
            n1Aux++;
    }
    for (int i = n1Aux; i <= n2; i += 10)
    {
        promedio += i;
        counter++;
    }
    promedio /= counter;
    int primerDig, ultimoDig;
    flag = true;
    primerDig = n2 / 100;
    ultimoDig = n2 % 10;
    if (primerDig != ultimoDig)
    {
        if (n2 % 100 != 0)
        {
            if (primerDig < ultimoDig)
            {
                n2 -= ultimoDig - primerDig;
            }
            else
            {
                n2 = n2 - 10 + primerDig - ultimoDig;
            }
        }
        else
        {
            n2 = n2 - 11 + primerDig - ultimoDig;
        }
        return promedio;
    }
}
int main()
{
    int Izq, Der;
    do
    {
        cin >> Izq >> Der;
    } while (Izq < 100 or Der < Izq * 3);
    cout << fixed << setprecision(2) << funcionE(Izq, Der) << endl;
    cout << Der << endl;
    return 0;
}
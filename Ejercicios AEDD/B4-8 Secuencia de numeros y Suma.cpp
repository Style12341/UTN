#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, n1 = 1, n2 = 1, dist, menor, noN;
    do
    {
        cin >> n1 >> n2;
        dist = abs(n1 - n2);
        menor = (n1 <= n2) ? n1 : n2;
        int suma = 0;
        if (n1 > 0 && n2 > 0)
        {
            for (int i = menor; i <= (menor + dist); i++)
            {
                suma += i;
                cout << i << " ";
            }
            cout << "Sum=" << suma << endl;
        }
    } while (n1 > 0 && n2 > 0);
    return 0;
}
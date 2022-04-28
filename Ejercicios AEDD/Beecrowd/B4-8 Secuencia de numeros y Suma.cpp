#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, n1, n2, dist, menor, noN;
    int suma = 0;
    cin >> n1 >> n2;
    dist = abs(n1 - n2);
    menor = (n1 <= n2) ? n1 : n2;
    noN = n1 <= 0 or n2 <= 0;

        for (int i = menor; i <= (menor + dist); i++)
        {
            suma += i;
            cout << i << " ";
        }

        cout << "Sum=" << suma << endl;
    }
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, n1 = 1, n2 = 0, dist, menor, noN;
    while (n1 != n2)
    {
        cin >> n1 >> n2;
        menor = (n1 <= n2) ? n1 : n2;
        if (n1 != n2)
        {
            if (menor == n1)
            {
                cout << "Crescente" << endl;
            }
            else
                cout << "Decrescente" << endl;
        }
    }

    return 0;
}
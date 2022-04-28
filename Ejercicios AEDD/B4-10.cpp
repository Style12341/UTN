#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, n1 = 0, n2 = 0, dist, menor, noN;
    while (n1 <= 0 || n2 <= 0)
    {
        cin >> n1 >> n2;
    }
    dist = abs(n1 - n2);
    menor = (n1 <= n2) ? n1 : n2;
    for (int i = menor + 1; i < (menor + dist); i++)
    {
        if (i % 5 == 3 or i % 5 == 2)
        {
            cout << i << endl;
        }
    }
    return 0;
}
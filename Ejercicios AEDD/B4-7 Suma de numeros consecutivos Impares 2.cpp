#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, n1, n2, dist, menor;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        int suma = 0;
        cin >> n1 >> n2;
        dist = abs(n1 - n2);
        menor = (n1 <= n2) ? n1 : n2;
        for (int i = menor + 1; i < (menor + dist); i++)
        {
            if (i % 2 == 1 or i % 2 == -1)
            {
                suma += i;
            }
        }
        cout << suma << endl;
    }
    system("pause");
    return 0;
}
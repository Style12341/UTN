#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n1, n2, dist, mayor;
        cout<<"Ingrese dos numeros enteros"<<endl;
        cin >> n1 >> n2;
        dist = abs(n1 - n2);
        mayor = (n1 >= n2) ? n1 : n2;
        for (int i = mayor; i >= (mayor - dist); i--)
        {
            if (i % 2 == 1 or i % 2 == -1)
            {
                cout<<i<<" ";
            }
    }
    cout<<endl;
    return 0;
}
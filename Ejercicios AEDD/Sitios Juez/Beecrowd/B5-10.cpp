#include <iostream>
#include <cmath>

using namespace std;

bool esPerfecto(int n1)
{
    int suma=0;
    if (n1>1)
    {
        suma++;
        for (int i = 2; i < n1; i++)
        {
        if (n1%i == 0)
        {
            suma+=i;
        }
        }
    }
    return suma==n1;

}

int main()
{
    int casos;
    cin>>casos;
    for (int i = 0; i < casos; i++)
    {
        int n1;
        cin>>n1;
        cout<<n1;
        if (esPerfecto(n1))
        {
            cout<<" eh perfeito"<<endl;
        }else
        cout<<" nao eh perfeito"<<endl;  
    }
    return 0;
}
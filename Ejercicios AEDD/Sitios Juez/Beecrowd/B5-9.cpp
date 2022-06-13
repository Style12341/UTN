#include <iostream>
#include <cmath>
using namespace std;
int sumaConsecImp(int n1, int n2)
{
    int dist, menor, start, suma = 0;
    dist = abs(n1 - n2);
    menor = (n1 <= n2) ? n1 : n2;
    start = ((menor + 1) % 2 == 1) ? menor + 1 : menor + 2;
    while (start < menor + dist)
    {
        suma += start;
        start += 2;
    }
    return suma;
}

int main()
{
    int casos;
    cin >>casos;
    for (int i = 0; i < casos; i++)
    {
        int n1,n2;
        cin>>n1>>n2;
        cout<<sumaConsecImp(n1, n2)<<endl;
    }
    
    return 0;
}
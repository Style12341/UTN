#include <iostream>
#include <iomanip>
using namespace std;

double funcionB(int &M, int N)
{
    int suma = 0;
    int MAux = M;
    int start;
    bool flag = true;
    while (flag)
    {
        if (MAux % 10 == 5)
        {
            start = MAux;
            flag = false;
        }else
        MAux++;
    }
    for (int i = MAux; i <= N; i += 10)
    {
        suma += i;
    }
    MAux = M;
    M = suma;
    int counter = 0;
    double promedio=0;
    flag = true;
    while (flag)
    {
        if (MAux % 7 == 0)
        {
            start = MAux;
            flag = false;
        }else
        MAux++;
    }
    for (int i = MAux; i <= N; i += 7)
    {
        promedio += i;
        counter++;
    }
    if (counter>0)
    {
        promedio /= counter;
    }
    
    return promedio;
}

int main()
{
    int M, N;
    double promedio;
    cin >> M;
    do
    {
        cin >> N;
    } while (N < 4 * M);
    promedio=funcionB(M, N);
    cout<<M<<endl;
    cout<<fixed<<setprecision(3)<<promedio<<endl;
    return 0;
}
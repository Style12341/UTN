#include <iostream>

using namespace std;
#define N 5

void normalizar(float V[], int tam);
float minArray(float V[], int tam);
float maxArray(float V[], int tam);

int main()
{
    float X[N] = {1, 2, 3, 4, 5};
    normalizar(X, N);
    for (int i = 0; i < N; i++)
    {
        cout << "Posicion " << i << " :" << X[i] << endl;
    }

    return 0;
}

void normalizar(float V[], int tam)
{
    float max = maxArray(V, tam);
    float min = minArray(V, tam);
    for (int i = 0; i < tam; i++)
    {
        V[i] = ((V[i] - min) / (max - min)) * 100;
    }
}

float maxArray(float V[], int tam)
{
    float max = V[0];
    for (int i = 1; i < tam; i++)
    {
        if (V[i] > max)
        {
            max = V[i];
        }
    }
    return max;
}

float minArray(float V[], int tam)
{
    float min = V[0];
    for (int i = 1; i < tam; i++)
    {
        if (V[i] < min)
        {
            min = V[i];
        }
    }
    return min;
}
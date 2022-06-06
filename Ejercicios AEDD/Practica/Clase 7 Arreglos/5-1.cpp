#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define N 10
void inicializar_teclado(int V[], int tam);
void inicializar_aleatorio(int V[], int tam);
int main()
{
    srand(time(NULL));
    int arreglo[N];

    inicializar_aleatorio(arreglo, N);
    for (int i = 0; i < N; i++)
    {
        cout << arreglo[i] << endl;
    }
    return 0;
}

void inicializar_teclado(int V[], int tam)
{

    for (int i = 0; i < tam; i++)
    {
        cout << "Ingrese el elemento " << i + 1 << endl;
        cin >> V[i];
    }
}

void inicializar_aleatorio(int V[], int tam)
{
    for (int i = 0; i < tam; i++)
    {

        V[i] = rand();
    }
}

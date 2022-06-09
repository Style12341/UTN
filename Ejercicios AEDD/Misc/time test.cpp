#include <chrono>
#include <iostream>
#include <random>
#include <ctime>
using namespace std;
using namespace std::chrono;
void quitarUnListR(int vector[], int &tl, int valor);
void inicializar_aleatorio(int V[], int tam);

int main()
{
    int arreglo[100000];
    inicializar_aleatorio(arreglo, 100000);
    int arregloC[100000];
    for (int i = 0; i < 100000; i++)
    {
        arregloC[i] = arreglo[i];
    }
    int tl=100000;
    int tlC=100000;

    auto start = high_resolution_clock::now();
    quitarUnListR(arreglo, tl, 0);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function berni: "
         << duration.count() << " microseconds" <<" "<<tl<< endl;
    auto starte = high_resolution_clock::now();
    quitarUnListR(arregloC, tlC, 0);
    auto stope = high_resolution_clock::now();
    auto duratione = duration_cast<microseconds>(stope - starte);

    cout << "Time taken by function Julia: "
         << duratione.count() << " microseconds" <<" "<<tl<< endl;
    return 0;
}

void inicializar_aleatorio(int V[], int tam)
{
    for (int i = 0; i < tam; i++)
    {

        V[i] = i%2;
    }
}
void quitarUnListR(int vector[], int &tl, int valor)
{
    int repeticion[tl];          // Crea una array repeticion en el cual se guardan los indices que contienen el valor indicado repetido
    int tlR = 0;                 // Tamaño logico del array repeticion
    int counter = 0;             // Contador para controlar el while mas adelatne
    for (int i = 0; i < tl; i++) // Aqui se guarda cada indice con el valor indicado repetido en el array repeticion, aumentando su tamaño logico.
    {
        if (valor == vector[i])
        {
            repeticion[tlR] = i;
            tlR++;
        }
    }

    if (tlR != 0) // Si existe al menos un valor repetido realiza el borrado
    {
        repeticion[tlR] = tl;         // Aqui colocamos que el ultimo valor, fuera del tamaño logico de repeticion, sea el tamaño logico del array original.
        for (int j = 0; j < tlR; j++) // Aqui realizamos el borrado las veces que sea necesario
        {
            for (int i = repeticion[j]; i < repeticion[j + 1]; i++) // Aqui se determina el rango que comienza desde el indice del
            {                                                       // primer repetido hasta el indice del siguiente o al tamaño logico en su defecto
                vector[i - j] = vector[i + 1];                      // Reemplaza al valor i menos la cantidad de veces que ya se haya realizado un proceso de borrado
                                                                    // a el valor siguiente al valor actual(comienza por el repetido) evaluado
            }
            tl--; // Se resta el tamaño logico del arreglo original.
        }
    }
}

void JquitarUnListR(int vector[], int &tl, int valor){

    for (int i = 0; i < tl; i++)
    {
        if (valor==vector[i])
        {
            for (int j = i; j < tl; j++)
            {
                vector[j] = vector[j+1];
            }
            tl--;
        }
        
    }
    return;
}
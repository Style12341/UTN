/*2. Una función debe recibir una lista de números enteros positivos. Debe retornar los datos actualizados,
eliminando del vector los valores repetidos; y además devolver la cantidad de elementos pares
eliminados y el promedio de los valores que quedan en el vector.*/

#include <iostream>

using namespace std;
int buscarRep(int V[], int &tl, float &promedio);
float promedioA(int V[], int tl);
void sacarRepetidosAux(int vector[], int &tl, int repetido, int &tlR);

int main()
{
    int pepito[50] = {1, 2, 3, 4, 2, 5, 3, 6, 7, 4, 8};
    int tl = 11;
    float promedio = 0;
    int valoresPares = buscarRep(pepito, tl, promedio);
    cout << "Los cantidad de valores pares removidos es: " << valoresPares << endl;
    cout << "El promedio resultante es: " << promedio << endl;
    for (int i = 0; i < tl; i++)
    {
        cout << pepito[i] << endl;
    }

    return 0;
}

int buscarRep(int V[], int &tl, float &promedio)
{
    int repetido;
    bool flag;
    int counterPares = 0;
    for (int i = 0; i < tl; i++)
    {
        int cantRepetidos = 0;
        flag = true;
        int counter = i + 1;
        while (flag && counter < tl)
        {
            if (V[i] == V[counter])
            {
                repetido = V[i];
                sacarRepetidosAux(V, tl, repetido, cantRepetidos);
                flag = false;
                i--;
                if (repetido % 2 == 0)
                {
                    counterPares += cantRepetidos;
                }
            }
            else
                counter++;
        }
    }
    promedio = promedioA(V, tl);

    return counterPares;
}
float promedioA(int V[], int tl)
{
    float total = 0;
    for (int i = 0; i < tl; i++)
    {
        total += V[i];
    }
    total /= tl;
    return total;
}
void sacarRepetidosAux(int vector[], int &tl, int repetido, int &tlR)
{
    int repeticion[tl];          // Crea una array repeticion en el cual se guardan los indices que contienen el valor indicado repetido
    for (int i = 0; i < tl; i++) // Aqui se guarda cada indice con el valor indicado repetido en el array repeticion, aumentando su tamaño logico.
    {
        if (repetido == vector[i])
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
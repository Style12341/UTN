#include <iostream>

using namespace std;

void quitarUnListIndice(int vector[], int &tl, int pos);
void quitarUnListValor(int vector[], int &tl, int valor);
int buscarValor(int vector[], int &tl, int valor);
void quitarUnListR(int vector[], int &tl, int valor);
void JquitarUnListR(int vector[], int &tl, int valor);

int main()
{
    int arreglo[10] = {1,2,3,4,2,5,2};
    int tl = 7;
    JquitarUnListR(arreglo, tl,2);
    for (int i = 0; i < tl; i++)
    {
        cout << arreglo[i] << endl;
    }
    return 0;
}
int buscarValor(int vector[], int &tl, int valor)
{
    bool flag = true;
    int posicion = -1;
    int counter = 0;
    while (flag && counter < tl)
    {
        if (valor == vector[counter])
        {
            posicion = counter;
            flag = false;
        }
        counter++;
    }
    if (flag)
    {
        cout << "No existe un entero " << valor << "dentro del arreglo " << endl;
    }
    return posicion;
}
void quitarUnListValor(int vector[], int &tl, int valor)
{
    int pos = buscarValor(vector, tl, valor);
    for (int i = pos; i < tl - 1; i++)
    {
        vector[i] = vector[i + 1];
    }
    tl--;
    return;
}
void quitarUnListIndice(int vector[], int &tl, int pos)
{

    for (int i = pos; i < tl - 1; i++)
    {
        vector[i] = vector[i + 1];
    }
    tl--;

    return;
}

void quitarUnListR(int vector[], int &tl, int valor)
{
    int repeticion[tl];          // Crea una array repeticion en el cual se guardan los indices que contienen el valor indicado repetido
    int tlR = 0;                 //Tamaño logico del array repeticion
    int counter = 0;             //Contador para controlar el while mas adelatne
    for (int i = 0; i < tl; i++) // Aqui se guarda cada indice con el valor indicado repetido en el array repeticion, aumentando su tamaño logico.
    {
        if (valor == vector[i])
        {
            repeticion[tlR] = i;
            tlR++;
        }
    }
    
    if (tlR != 0) //Si existe al menos un valor repetido realiza el borrado
    {
        repeticion[tlR] = tl;       //Aqui colocamos que el ultimo valor, fuera del tamaño logico de repeticion, sea el tamaño logico del array original.
        for (int j = 0; j <tlR;j++) //Aqui realizamos el borrado las veces que sea necesario
        {
            for (int i = repeticion[j]; i < repeticion[j + 1]; i++) //Aqui se determina el rango que comienza desde el indice del
            {                                                       //primer repetido hasta el indice del siguiente o al tamaño logico en su defecto
                vector[i - j] = vector[i + 1];                      // Reemplaza al valor i menos la cantidad de veces que ya se haya realizado un proceso de borrado
                                                                    // a el valor siguiente al valor actual(comienza por el repetido) evaluado
            }
            tl--;                                                   //Se resta el tamaño logico del arreglo original.
        }
    }
}
void quitarUnList(int vector[], int &tl, int valor){

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
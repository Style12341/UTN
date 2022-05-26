#include <iostream>

using namespace std;
int accion(float a, float b, float c, float &menor, float &mayor);
int main()
{
    int distintos;
    float a, b, c, menor, mayor;
    cout << "Ingrese tres numeros reales" << endl;
    cin >> a >> b >> c;
    distintos = accion(a, b, c, menor, mayor);
    if (distintos != -1)
    {
        cout << "El menor es " << menor << endl;
        cout << "El mayor es " << mayor << endl;
    }
    switch (distintos)
    {
    case 1:
        cout << "Los tres numeros ingresados son diferentes" << endl;
        break;
    case 0:
        cout << "Existen 2 numeros iguales y uno diferente" << endl;
        break;
    case -1:
        cout << "Los tres numeros ingresados son iguales" << endl;
        break;
    }
    return 0;
}

int accion(float a, float b, float c, float &menor, float &mayor)
{
    int estado;
    if (a == b && b == c)
    {
        estado = -1;
    }
    else if (a == b or a == c or b == c)
    {
        estado = 0;
    }
    else
    {
        estado = 1;
    }
    if(estado!=-1){
    menor = (a < b) ? a : b;
    menor = (menor < c) ? menor : c;
    mayor = (a < b) ? b : a;
    mayor = (mayor < c) ? c : mayor;
    }
    return estado;
}
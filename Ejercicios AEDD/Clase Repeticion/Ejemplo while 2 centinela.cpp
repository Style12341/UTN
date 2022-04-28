#include <iostream>
using namespace std;
int main()
{
    int calif, cantCalificacion = 1;
    float promedio = 0;
    cout << "Ingrese la calificacion 1 o ingrese -1 para terminar"<<endl;
    cin >> calif;
    while (calif != -1)
    {
        cantCalificacion++;
        cout<<cantCalificacion<<endl;
        promedio += calif;
        cout<<"Ingrese la calificacion "<<cantCalificacion<<" o ingrese el -1 para terminar"<<endl;
        cin>>calif;
        while (calif < -1 or calif > 100)
        {
            cout << "Ingrese la calificacion " << cantCalificacion << " o ingrese -1 para terminar" << endl;
            cin >> calif;
        }
    }
    cantCalificacion--;
    promedio /= cantCalificacion;
    cout << "El promedio, con " << cantCalificacion << " notas es de " << promedio << endl;
    system("pause");
    return 0;
}
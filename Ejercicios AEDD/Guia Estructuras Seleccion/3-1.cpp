#include <iostream>
using namespace std;

int main()
{
    int preguntas, preguntasC;

    cout << "Ingrese la cantidad de preguntas realizadas" << endl;
    cin >> preguntas;
    cout << "Ingrese la cantidad de preguntas correctas" << endl;
    cin >> preguntasC;
    if (preguntas > 0)
    {
        if (preguntasC >= 0 && preguntasC <= preguntas)
        {
            int porcentaje = ((float)preguntasC / (float)preguntas) * 100;
            ;
            if (porcentaje >= 50)
            {
                cout << "Nivel ";
                if (porcentaje >= 90)
                {
                    cout << "máximo" << endl;
                }
                else if (porcentaje >= 75)
                {
                    cout << "medio" << endl;
                }
                else if (porcentaje >= 50)
                {
                    cout << "regular" << endl;
                }
            }
            else
                cout << "Fuera de nivel" << endl;
        }
        else
            cout << "El numero de preguntas correctas no es valido" << endl;
    }
    else
        cout << "El numero de preguntas no es valido" << endl;
    {
    }
    system("pause");
    return 0;
}
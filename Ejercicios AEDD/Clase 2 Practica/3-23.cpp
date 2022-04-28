#include <iostream>
using namespace std;
int main()
{
    int edad, goles, defensoresMas3Goles = 0, maxGoles = 0, cantSinGoles = 0;
    int rango1622 = 0, rango2329 = 0, rango3036 = 0, menor25 = 0, mayor25 = 0;
    float porcentaje25 = 0;
    char posicion;
    bool noValido = true;
    bool terminar = edad == 0 && posicion == '0' && goles == 0;
    while (!terminar)
    {
        bool defensor;
        bool atacante;
        bool medio;
        bool posicionValida;
        bool rango_2329;
        bool rango_3036;
        bool rango_1622;
        do
        {
            cout << "Ingrese la edad, posicion (A: Atacante, D: Defensor, M: Medio y luego los goles anotados durante el ultimo año" << endl;
            cout << "Edad: ";
            cin >> edad;
            cout << "Posicion: ";
            cin >> posicion;
            cout << "Goles: ";
            cin >> goles;
            posicion = toupper(posicion);
            defensor = posicion == 'D';
            atacante = posicion == 'A';
            medio = posicion == 'M';
            rango_1622 = edad <= 22 && edad >= 16;
            rango_2329 = edad <= 29 && edad >= 23;
            rango_3036 = edad <= 36 && edad >= 30;
            posicionValida = defensor or atacante or medio;
            terminar = edad == 0 && posicion == '0' && goles == 0;
            if (!terminar)
            {
                if (edad < 16)
                {
                    cout << "La edad ingresada no es valida o menor 16 a 0" << endl;
                }
                else if (!posicionValida)
                {
                    cout << "La posicion ingresada no es valida" << endl;
                }
                else if (goles < 0)
                {
                    cout << "La cantidad de goles ingresados no es valida" << endl;
                }
                else
                    noValido = false;
            }
            else
                noValido = false;
        } while (noValido);
        if (!terminar)
        {
            cout << "TEST" << endl;
            if (edad > 25)
            {
                mayor25++;
            }
            else
                menor25++;
            if (defensor && goles > 3)
            {
                defensoresMas3Goles++;
            }
            if (goles > maxGoles)
            {
                maxGoles = goles;
            }
            if (atacante && goles == 0)
            {
                cantSinGoles++;
            }
            if (rango_3036)
            {
                rango3036 += goles;
            }
            else if (rango_2329)
            {
                rango2329 += goles;
            }
            else
                rango1622 += goles;
        }
    }
    if (mayor25 + menor25 != 0)
    {
        porcentaje25 = mayor25 * 100 / (float)(menor25 + mayor25);
    }
    cout<<"Se informa:"<<endl;
    cout << "   * Porcentaje de jugadores mayores a 25 años: " << porcentaje25 << "%" << endl;
    cout << "   * Cantidad de defensores con mas de 3 goles: " << defensoresMas3Goles << endl;
    cout << "   * Cantidad de goles del goleador del grupo: " << maxGoles << endl;
    cout << "   * Cantidad de atacantes sin goles hechos: " << cantSinGoles << endl;
    cout << "   * Cantidad de goles segun grupos etarios:" << endl;
    cout << "       * 16-22 años: " << rango1622 << endl;
    cout << "       * 23-29 años: " << rango2329 << endl;
    cout << "       * 29-36 años: " << rango3036 << endl;
    system("pause");
    return 0;
}
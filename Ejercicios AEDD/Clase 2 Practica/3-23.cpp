#include <iostream>;
using namespace std;
int main()
{
    int edad, goles, defensoresMas3Goles = 0, maxGoles = 0, cantSinGoles = 0
    int rango1622 = 0, rango2329 = 0, rango3036 = 0, menor25 = 0, mayor25 = 0;
    float porcentaje25 = 0;
    char posicion;
    bool noValido = false;
    do
    {
            bool defensor;
            bool atacante;
            bool medio ;
            bool posicionNovalida;
            bool rango_2329;
            bool rango_3036;
            bool rango_1622;
        do
        {
            cout << "Ingrese la edad, posicion (A: Atacante, D:Defensor,M:Medio y luego los goles anotados durante el ultimo año" << endl;
            cout << "Edad: ";
            cin >> edad;
            cout << "Posicion: ";
            cin >> posicion;
            cout << "Goles: ";
            cin >> goles;
            defensor = posicion == 'D' or posicion == 'd';
            atacante = posicion == 'A' or posicion == 'a';
            medio = posicion == 'M' or posicion == 'm';
            posicionNovalida = !defensor or !atacante or !medio;
            if (edad <= 0)
            {
                cout << "La edad ingresada no es valido" << endl;
            }
            else if (posicionNovalida)
            {
                cout << "La posicion ingresada no es valida" << endl;
            }
            else if (goles < 0)
            {
                cout << "La cantidad de goles ingresados no es valida" << endl
            }
            else
                noValido = false;

        } while (noValido);
        if (edad > 25)
        {
            mayor25++;
        }
        else
            menor25++;
         if (defensor && goles>3){
             defensoresMas3Goles++
         }

    } while (edad != 0 && posicion != '0' && goles != 0);

    return 0;
}
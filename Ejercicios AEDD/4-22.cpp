#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*
    Dada una secuencia (no ordenada) de números enteros finalizada en CTRL+Z, determinar:
        ● Cantidad de números positivos.
        ● Suma de los números positivos.
        ● Promedio de números positivos.
    Nota: El 0 (cero), al ser neutro, no se considera ni positivo ni negativo, por lo que no participará de las
    cuentas.
     */

    // Definiendo y declarando variables
    int contadorNumsPositivos = 0, sumaNumsPositivos = 0, num;

    // Iniciando loop de ingreso de datos
    cout << "Ingrese los numeros uno por uno (Ctrl+Z para concluir)" << endl;
    cout << "Ingrese un numero: ";

    while (cin >> num)
    {
        // while loop corta cuando se da de input Ctrl+Z. O cualquier cosa que no sea un entero.

        if (num > 0)
        {
            contadorNumsPositivos++;
            sumaNumsPositivos += num;
        }
        cout << "Ingrese un numero: ";
    }

    // output estadisticas de la información ingresada
    if (contadorNumsPositivos != 0)
    {
        cout << endl
             << "Estadisticas" << endl;
        cout << "Cantidad de numeros positivos: " << contadorNumsPositivos << endl;
        cout << "Suma de positivos: " << sumaNumsPositivos << endl;
        cout << fixed << setprecision(2) << "Promedio de positivos: " << (float)sumaNumsPositivos / contadorNumsPositivos << endl;
    }
    else
        cout << "No ingresaste ningun numero positivo" << endl; // En caso de no ingresar ningun numero positivo se notifica al usuario

    return 0;
}
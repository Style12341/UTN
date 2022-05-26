#include <iostream>

using namespace std;

void diaSiguiente(int &dia, int &mes, int &anio);
int diasMes(int mes, bool esBisiesto);
bool esBisiesto(int anio);

int main()
{
    int dia, mes, anio;
    cin >> dia >> mes >> anio;
    diaSiguiente(dia, mes, anio);
    cout << dia << "," << mes << "," << anio << endl;
    return 0;
}
bool esBisiesto(int anio)
{
    return anio % 400 == 0 or (anio % 100 != 0 and anio % 4 == 0);
}

int diasMes(int mes, bool esBisiesto)
{
    int dias;
    switch (mes)
    {
    case 2:
        if (esBisiesto)
        {
            dias = 29;
        }
        else
            dias = 28;
        break;
    case 1:;
    case 3:;
    case 5:;
    case 7:;
    case 8:
    case 10:
    case 12:
        dias == 31;
        break;
    case 4:;
        case 6:;
    case 9:;
    case 11:
        dias = 30;
        break;
    }
}

void diaSiguiente(int &dia, int &mes, int &anio)
{
    int cantDiasMes = diasMes(mes, esBisiesto(anio));

    if (mes > 0 and mes < 13 and dia > 0 and dia <= cantDiasMes)
    {
        dia++;
        if (dia == cantDiasMes + 1)
        {
            dia = 1;
            mes++;
        }
        if (mes == 13)
        {
            mes == 1;
            anio++;
        }
    }else
    {
        dia=0;
        mes=0;
        anio=0;
    }
}

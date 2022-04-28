#include <iostream>
using namespace std;

int main()
{
	int dia, mes, diaaux = 0;
	cin >> dia >> mes;
	if (mes == 2)
	{
		diaaux = 28;
	}
	else if ((mes < 8 && mes % 2 == 1) || (mes > 7 && mes % 2 == 0))
	{
		diaaux = 31;
	}
	else if (mes < 13 || mes > 0)
	{
		diaaux = 30;
	}
	else
		cout << "El mes ingresado no es valido" << endl;
	if (dia <= diaaux && dia > 0)
	{
		cout << "Tu signo es ";
		switch (mes)
		{
		case (1):
			if (dia < 21)
			{
				cout << "Capricornio" << endl;
			}
			else
				cout << "Acuario" << endl;
			break;
		case (2):
			if (dia < 20)
			{
				cout << "Acuario" << endl;
			}
			else
				cout << "Piscis" << endl;
			break;
		case (3):
			if (dia < 21)
			{
				cout << "Piscis" << endl;
			}
			else
				cout << "Aries" << endl;
			break;
		case (4):
			if (dia < 21)
			{
				cout << "Aries" << endl;
			}
			else
				cout << "Tauro" << endl;
			break;
		case (5):
			if (dia < 22)
			{
				cout << "Tauro" << endl;
			}
			else
				cout << "Geminis" << endl;
			break;
		case (6):
			if (dia < 22)
			{
				cout << "Geminis" << endl;
			}
			else
				cout << "Cancer" << endl;
			break;
		case (7):
			if (dia < 24)
			{
				cout << "Cancer" << endl;
			}
			else
				cout << "Leo" << endl;
			break;
		case (8):
			if (dia < 24)
			{
				cout << "Leo" << endl;
			}
			else
				cout << "Virgo" << endl;
			break;
		case (9):
			if (dia < 24)
			{
				cout << "Virgo" << endl;
			}
			else
				cout << "Libra" << endl;
			break;
		case (10):
			if (dia < 24)
			{
				cout << "Libra" << endl;
			}
			else
				cout << "Escorpio" << endl;
			break;
		case (11):
			if (dia < 23)
			{
				cout << "Escorpio" << endl;
			}
			else
				cout << "Sagitario" << endl;
			break;
		case (12):
			if (dia < 21)
			{
				cout << "Sagitario" << endl;
			}
			else
				cout << "Capricornio" << endl;
			break;
		}
	}
	else
		cout << "El dia ingresado no es valido" << endl;

	return 0;
}

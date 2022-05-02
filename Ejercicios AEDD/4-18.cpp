#include <iostream>
	using namespace std;
	
	int main(){
		int cateto;						// Definimos la variable entera que utilizaremos.
		bool bandera = true;
		do								// Utilizamos do whilepara verificar que la entrada de la variable sea correcta en caso de no ser correcta la bandera sera falsa.
		{
			cout << "Ingrese el lado del cateto para genenrar un triangulo rectangulo isoceles:" << endl;		//
			cin >> cateto;
			if (cateto <= 1)			// Este if sirve para que cuadno el usuario ingrese un numero menor a 1 le pida reingresar nuevamente el k.
			{
				cout << "El numero ingresado es menor a 1";
			}
			else
				bandera = false;
		} while (bandera);
		
		for (int i = 1; i <= cateto; i++) // Este for se encarga de imprimir un a k mcantidad de renglones.
		{
			for (int j = 1; j <= i; j++) //  Este for sirve para imprimir la cantidad K en el sentido horizontal.
			{
				cout << "*";			// Imprime asterisco.
			}
			cout << endl;				// Este enter sirve para pasar a la otra linea horizontal.
		}
		
		cout << endl;
		system("Pause");
		return 0;
}
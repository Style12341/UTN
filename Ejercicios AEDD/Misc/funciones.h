#ifndef _funciones
#define _funciones


float promedio(int cantNum); //Calcula el promedio de cantNum
float promedioA(int V[],int tl); //Calcula el promedio de un array;
int cifras(int x); //Devuelve la cantidad de cifras del numero ingresado
int cantidadDiv(int x); //Devuelve la cantidad de divisores de un numero
unsigned long long int factorial(int x); //Calcula el factorial de un numero
int potencia(int base, int exponent); //Calcula la potencia con exponentes enteros
int mcd(int n1, int n2); //Calcula el minimo comun divisor
void quitarUnListIndice(int vector[], int &tl, int pos);// Quita el elementedo con el indice indicado de una lista desordenada
void quitarUnListValor(int vector[], int &tl, int valor);// Quita el elemento con el valor indicado de una lista
int buscarValor(int vector[], int &tl, int valor); //Calcula el minimo comun divisor
#include "funciones.cpp"
#endif

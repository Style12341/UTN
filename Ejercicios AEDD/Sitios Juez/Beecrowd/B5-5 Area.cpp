#include <iostream>
#include <iomanip>
using namespace std;

#define pi 3.14159

double trianguloAC(double base, double altura)
{
    return (base * altura) / 2;
}
double areaCirculo(double radio)
{
    return pi * radio * radio;
}
double areaTrapecio(double base1, double base2, double altura)
{
    return ((base1 + base2) / 2) * altura;
}
double areaCuadrado(double lado)
{
    return lado * lado;
}
double areaRectangulo(double lado1, double lado2)
{
    return lado1 * lado2;
}
int main()
{
    double A, B, C;
    cin >> A >> B >> C;
    cout << fixed << setprecision(3) << "TRIANGULO: " << trianguloAC(A, C) << endl;
    cout << "CIRCULO: " << areaCirculo(C) << endl;
    cout << "TRAPEZIO: " << areaTrapecio(A, B, C) << endl;
    cout << "QUADRADO: " << areaCuadrado(B) << endl;
    cout << "RETANGULO: " << areaRectangulo(A, B) << endl;
    return 0;
}
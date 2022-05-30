#include <iostream>
#include <cmath>
using namespace std;

int SUMULPLOT(int, int, int);

int main()
{
    int A, B, C;
    cout << "Ingrese los numeros A, B y C" << endl;
    cin >> A >> B >> C;
    cout << SUMULPLOT(A, B, C);
    return 0;
}
int SUMULPLOT(int A, int B, int C)
{
    int resultado = 0;
    if (C > 0)
    {
        for (int i = A; i <= B; i += C)
        {
            resultado += i;
        }
    }
    else if (C < 0)
    {
        resultado=1;
        for (int i = B; i >= A; i += C)
        {
            resultado *=i;
        }
    }
    else
        resultado = (pow(A, B) > pow(B, A)) ? pow(A, B) : pow(B, A);

    return resultado;
}

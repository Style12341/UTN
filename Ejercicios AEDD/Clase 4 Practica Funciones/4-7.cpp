#include <iostream>
using namespace std;

bool palindromo(int num);

int main()
{
    int num;
    int y;
    float total = 0;
    cout << "Ingrese la cantidad de numeros a promediar" << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Ingrese el numero " << i + 1 << endl;
        cin >> y;
        total += y;
    }
    cout << "El promedio es " << promedio(num, total) << endl;

    return 0;
}
bool palindromo(int num){
    int cifras=0;
    while(num%10 !=0){
        num /= 10;
        cifras++
    }
    
}
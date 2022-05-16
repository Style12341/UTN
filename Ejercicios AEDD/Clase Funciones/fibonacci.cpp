#include <iostream>
#include <cmath>
using namespace std;
int fibonacci(int x){
 if (x==0 or x==1) return x;
 return fibonacci(x-1)+fibonacci(x-2);
}

int main()
{
    int num;
    cout << "Ingrese la posicion del numero de fibonacci" << endl;
    cin >> num;
    cout << fibonacci(num);
    return 0;
}
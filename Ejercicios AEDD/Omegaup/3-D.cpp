#include <iostream>
using namespace std;
int sumaDigitos(int);

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int n, mayor = 0;
    cin >> n;
    cout << sumaDigitos(n) << endl;
    return 0;
}

int sumaDigitos(int num)
{
    int temp, suma = 0;
    if (num > 0)
    {
        suma= num%10;
        num /= 10;
        return suma + sumaDigitos(num);
    }
    else
    {
        return 0;
    }
}
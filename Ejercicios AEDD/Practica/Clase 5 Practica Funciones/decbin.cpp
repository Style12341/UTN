#include <iostream>

using namespace std;
int decBin(int);
int main()
{
    int num;
    cout << "Ingrese un numero..." << endl;
    cin >> num;
    cout << decBin(num);
}

int decBin(int num)
{
    if (num < 2)
        return num;
    return num % 2 + (10 * decBin(num / 2));
}

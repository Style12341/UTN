#include <iostream>

using namespace std;
void masmas(int &a);
void menosmenos(int &b);

int main()
{
    int a;
    cout << "Ingrese un numero" << endl;
    cin >> a;
    masmas(a);
    cout << a;
    return 0;
}

void masmas(int &a)
{
    ++a;
}
void menosmenos(int &b)
{
    ++b;
}

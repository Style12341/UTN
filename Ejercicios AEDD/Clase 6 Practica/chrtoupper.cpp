#include <iostream>

using namespace std;

bool chrtoupper(char &x);

int main()
{
    char x;
    cout << "Ingrese un caracer" << endl;
    cin >> x;
    chrtoupper(x);
    cout << x;
    return 0;
}
bool chrtoupper(char &x)
{
    if (x <= 122 and x >= 97)
        x -= 32;
}
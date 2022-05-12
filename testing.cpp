#include <iostream>
using namespace std;

int main()
{

    int a = 50, b = 23;

    if (a % b < 2)
    {
        if (b > a)
            cout << ++b << endl;
    }
    else
    {
        cout << b++ << endl;

        if ((a -= 14) < (b *= 2))
            cout << ++a << endl;
    }
    system("pause");
    return 0;
}
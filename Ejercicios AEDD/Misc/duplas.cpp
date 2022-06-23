#include <iostream>

using namespace std;

int main()
{
    int A, B, mayor = 0;
    bool impar = false;

    do
    {
        cin >> A;
        if (A != -1)
        {
            cin >> B;
            if (A + B > mayor)
            {
                mayor = A + B;
            }
            if (A == B and A % 2 == 1)
            {
                impar = true;
            }
        }

    } while (A != -1);
    cout << mayor << endl;
    if (impar)
    {
        cout << "SI";
    }
    else
        cout << "NO";

    return 0;
}
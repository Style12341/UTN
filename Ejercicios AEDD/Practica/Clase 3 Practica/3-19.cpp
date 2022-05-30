#include <iostream>
using namespace std;

int main()
{
    int counter = 1;
    for (int i = 1000; i < 10000; i++)
    {
        int cifra1 = i % 10;
        int cifra2 = (i / 10) % 10;
        int cifra3 = (i / 100) % 10;
        int cifra4 = i / 1000;
        if (cifra1 + cifra3 == cifra2 + cifra4)
        {

            cout << "Numero " << counter << ": " << i << endl;
            counter++;
        }
    }
    return 0;
}
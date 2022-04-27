#include <iostream>
using namespace std;
int main()
{
    int numPos = 0, numNeg = 0, numPar = 0, numImpar = 0;
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            numPar++;
        }
        else
            numImpar++;
        if (n != 0)
        {
            if (n > 0)
            {
                numPos++;
            }
            else
                numNeg++;
        }
    }
    cout << numPar << " valor(es) par(es)" << endl;
    cout << numImpar << " valor(es) impar(es)" << endl;
    cout << numPos << " valor(es) positivo(s)" << endl;
    cout << numNeg << " valor(es) negativo(s)" << endl;
    return 0;
}
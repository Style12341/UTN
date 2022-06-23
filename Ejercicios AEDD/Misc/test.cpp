#include <iostream>
using namespace std;
// codifique completamente la funcionA aquí
int funcionA(int, int);
int main(int argc, char *argv[])
{
    // declare las variables necesarias aquí...
    int A, B, C, D, men, may;

    do
    {
        cin >> A >> B >> C >> D;
    } while (A==B or A==C or A==D or B==C or B==D or C==D);
    men = (A < B) ? A : B;
    men = (men < C) ? men : C;
    men = (men < D) ? men : D;
    may = (A > B) ? A : B;
    may = (may > C) ? may : C;
    may = (may > D) ? may : D;

    cout << funcionA(men, may) << endl;

    return 0;
}
int funcionA(int X, int Y)
{
    int counter = 1;
    int start= X;
    while (counter)
    {
        if (start%10==0)
        {
            counter--;
        }else
        start++;
    }
    
    

    for (int i = start; i <= Y; i+=10)
    {
            counter++;

    }
    return counter;
}
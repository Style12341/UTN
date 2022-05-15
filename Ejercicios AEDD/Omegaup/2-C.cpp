#include <iostream>
using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int N, contador = 0;
    cin >> N;
    if (N % 2 == 0)
    {
        N /= 2;
        contador++;
    }
    else
    {
        N++; //
        contador++;
    }
    if (N > 9)
    {
        if (N < 100)
        {
            N /= 10;
            contador++;
        }
        else
        {
            N /= 100;
            contador++;
        }
    }
    if (N % 3 == 0)
    {
        N--;
        contador++;
    }
    cout << N << " " << contador << endl;
    return 0;
}
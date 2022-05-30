#include <iostream>
using namespace std;
void piramide(int altura);
int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int altura;
    cin >> altura;
    piramide(altura);
    return 0;
}

void piramide(int altura)
{
    for (int i = 1; i <= altura; i++)
    {
        int aux = 0;
        for (int j = 1; j <= altura - i; j++)
        {
            cout << " ";
        }
        while (2 * i - 1 != aux)
        {
            cout << "*";
            aux++;
        }
        cout << endl;
    }
}
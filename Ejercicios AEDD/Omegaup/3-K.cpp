#include <iostream>
using namespace std;
int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int ancho;
    cin >> ancho;
    for (int i = 1; i <= ancho; i++)
    {
        if (i % 2 == 0)
        {
            cout << "#";
        }
        else
            cout << "-";
    }
    cout << endl;
    for (int i = 1; i <= ancho; i++)
    {
        if (i % 2 == 0)
        {
            cout << "-";
        }
        else
            cout << "#";
    }
    cout << endl;

        return 0;
}

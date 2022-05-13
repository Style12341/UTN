#include <iostream>
using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int A, B, C, combinaciones;
    cin >> A >> B >> C;
    if (A > B && B < C && A > C || A < B && B > C && A > C)
    {
        combinaciones = 2;
    }
    else if (A < C && B > C || A > B && B < C || A > B && B > C)
    {
        combinaciones = 1;
    }
    else
        combinaciones = 0;
    cout << combinaciones << endl;

    return 0;
}
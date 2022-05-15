#include <iostream>
using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int A, B, C, combinaciones;
    cin >> A >> B >> C;

    if (A == B && B == C)
    {
        cout << "I" << endl;
    }
    else if (A <= B && B <= C)
    {
        cout << "C" << endl;
    }
    else if (A >= B && B >= C)
    {
        cout << "D" << endl;
    }
    else
        cout << "X"<<endl;

    return 0;
}
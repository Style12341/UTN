#include <iostream>
using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int L;
    cin >> L;

    if (L <= 3)
    {
        cout << "BEBE" << endl;
    }
    else if (L <= 14)
    {
        cout << "NINO" << endl;
    }
    else if (L <= 18)
    {
        cout << "JOVEN" << endl;
    }
    else if (L <= 65)
    {
        cout << "ADULTO" << endl;
    }
    else
        cout << "ADULTO 3RA" << endl;
        

    return 0;
}
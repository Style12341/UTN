#include <iostream>
using namespace std;
int main()
{
    int n, caso, in = 0, out = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> caso;
        if (caso > 0)
        {
            if (caso >= 10 && caso <= 20)
            {
                in++;
            }
            else
                out++;
        }
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    return 0;
}
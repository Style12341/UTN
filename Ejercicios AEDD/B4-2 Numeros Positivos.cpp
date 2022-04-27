#include <iostream>
using namespace std;
int main()
{
    int nPos;
    for (int i = 0; i < 6; i++)
    {
        float n = 0;
        while (n == 0)
        {
            cin >> n;
        }
        if (i == 0)
        {
            nPos = 0;
        }
        if (n > 0)
        {
            nPos++;
        }
    }
    cout << nPos << " valores positivos" << endl;
}
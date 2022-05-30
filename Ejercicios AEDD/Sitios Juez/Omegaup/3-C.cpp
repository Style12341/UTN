#include <iostream>
using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int n, mayor = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int nTemp;
        cin >> nTemp;
        if (nTemp > mayor)
        {
            mayor = nTemp;
        }
    }
    cout<<mayor<<endl;

    return 0;
}
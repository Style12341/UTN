#include <iostream>
using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int suma = 0;
    bool flag = true;
    do
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            flag = false;
        }
        else
            suma += n;
    } while (flag);
    cout << suma << endl;
    return 0;
}
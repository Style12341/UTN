#include <iostream>
using namespace std;
int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int n, aux = 1;
    int num=0;
    cin >> n;

    while (num < n)
    {
        while (aux <= 5)
        {
            if (num == n)
                break;
            cout << aux << " ";
            aux++;
            num++;
        }
        aux -= 2;
        while (aux >= 1)
        {
            if (num == n)
                break;
            cout << aux << " ";
            aux--;
            num++;
        }
        aux+=2;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    while (N < 100)
    {
        if (N % 2 == 0)
        {
            N += 3;
        }
        else
            N *= 2;
    }
    cout << N;
    return 0;
}
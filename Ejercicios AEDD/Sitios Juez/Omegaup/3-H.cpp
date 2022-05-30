#include <iostream>
using namespace std;
void tri_sup(int);
int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int lado;
    cin >> lado;
    tri_sup(lado);
    return 0;
}

void tri_sup(int num)
{
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout <<"*";
        }
        cout << endl;
    }
    cout << endl;
    return;
}
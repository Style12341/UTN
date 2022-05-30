#include <iostream>
using namespace std;
void piramide(int num);
int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    piramide(n);
    return 0;
}

void piramide(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return;
}
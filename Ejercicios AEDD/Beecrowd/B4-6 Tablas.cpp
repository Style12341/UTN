#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    while (num <= 2 or num >= 1000)
    {
        cin >> num;
    }
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " x " << num << " = " << i * num << endl;
    }
    return 0;
}
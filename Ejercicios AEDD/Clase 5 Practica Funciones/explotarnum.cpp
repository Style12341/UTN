#include <iostream>

using namespace std;

void explotar(int n, int b);

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    explotar(num1, num2);
    return 0;
}

// n1 = n/b
// n2= n-n1

void explotar(int n, int b)
{
    if (n <= b)
    {
        cout << n << " ";
        return;
    }
    explotar((n / b), b);
    explotar(n - n / b, b);
}
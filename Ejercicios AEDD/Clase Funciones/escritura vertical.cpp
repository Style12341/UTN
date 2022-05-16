#include "iostream"
using namespace std;

void escrituraVertical(int x)
{
    if (x < 10)
    {
        cout << x<<endl;
        return;
    }
    escrituraVertical(x/10);
    cout<<x%10<<endl;
    return;
}
int main()
{
    int num;
    cin >> num;
    escrituraVertical(num);

    return 0;
}
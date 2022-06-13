#include <iostream>
using namespace std;

int producto(int x, int y)
{
    return x * y;
}

int main()
{
    int x, y, PROD;
    cin >> x >> y;
    PROD = producto(x, y);
    cout << "PROD = " << PROD<<endl;
    return 0;
}
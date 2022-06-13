#include <iostream>
#include <iomanip>
using namespace std;

double promedioPon(double x, double y, double z)
{
    return x * 0.2 + y * 0.3 + z * 0.5;
}

int main()
{
    double x, y, z, res;
    cin >> x >> y >> z ;
    res = promedioPon(x, y, z);
    cout << fixed << setprecision(1) << "MEDIA = " << res << endl;
    return 0;
}
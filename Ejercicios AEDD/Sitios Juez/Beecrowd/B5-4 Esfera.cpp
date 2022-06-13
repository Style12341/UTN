#include <iostream>
#include <iomanip>
using namespace std;

#define pi 3.14159

double volumenEsfera(int radio)
{
    return ((4.0/3)*pi*radio*radio*radio);
}

int main()
{
    int radio;
    cin>>radio;
    cout<<fixed<<setprecision(3) <<"VOLUME = "<<volumenEsfera(radio)<<endl;
    return 0;
}
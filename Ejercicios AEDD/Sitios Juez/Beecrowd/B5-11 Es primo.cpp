#include <iostream>
#include <cmath>

using namespace std;

bool esPrimo(int n1)
{
    bool flag=true;
    int counter=2;
    while (flag && counter<=sqrt(n1))
    {
        if (n1%counter==0)
        {
            flag=false;
        }else
        counter++;
    }
    return flag;
}

int main()
{
    int casos;
    cin>>casos;
    for (int i = 0; i < casos; i++)
    {
        int n1;
        cin>>n1;
        cout<<n1;
        if (esPrimo(n1))
        {
            cout<<" eh primo"<<endl;
        }else
        cout<<" nao eh primo"<<endl;  
    }
    return 0;
}
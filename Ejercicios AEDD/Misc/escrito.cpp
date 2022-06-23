#include <iostream>

using namespace std;

int main(){
    int posA= (int) 'a'; char letra;
    int frecL[26]={0};
    cout<<"Ingrese una letra minuscula,termine con ctrl+>"<<endl;
    while (cin>>letra)
    {
        frecL[(int) (letra-posA)]++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout<<"La frecuencia de al letra "<<(char) (i+posA)<<" es: "<<frecL[i]<<endl;
    }
    return 0;
}
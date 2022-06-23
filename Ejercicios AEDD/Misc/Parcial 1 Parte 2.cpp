#include <iostream>

using namespace std;

double promedioProcesamiento(double V[],int tl);
bool procesadorDanado(double V[],int tl);

int main(){
    int tl =25;
    double tiempo[25]= {1,2,3,4,5,6,7,8,9,9,9,9,5,9,9,9,17,18,19,20,21,22,23,24,25};
    cout<<procesadorDanado(tiempo,tl);

    return 0;
}

double promedioProcesamiento(double V[],int tl){
    if (--tl==0) return V[0]*0.04;
    return V[tl]*0.04+promedioProcesamiento(V,tl);
}

bool procesadorDanado(double V[],int tl){
bool flag = true; int posicion = 8; int contSeguidos =0;
while (flag and posicion<21){
    if (V[posicion]==V[posicion+1])
    {
       contSeguidos++;
    }else contSeguidos = 0;
    if (contSeguidos==7) flag=false;
    if (posicion>13 and contSeguidos==0) posicion=21;
    else posicion++;
}
return !flag;
}
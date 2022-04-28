#include <iostream>
#include <cmath>
using namespace std;
int main(){
float a,b,c, raiz1,raiz2,radicando;
cout<<"Ingrese los coeficientes del polinomio de grado 2 (ax^2+bx+c)"<<endl;
cout<<"Ingrese coeficiente a: ";
cin>>a;
if(a!=0){
cout<<"Ingrese coeficiente b: ";
cin>>b;
cout<<"Ingrese coeficiente c: ";
cin>>c;
radicando = b*b-4*a*c;
if (radicando>=0){
    raiz1= (-b+sqrt(radicando))/2*a;
    raiz2= (-b-sqrt(radicando)/2*a);
    cout<<"Las raices reales de "<<a<<"x^2+"<<b<<"x+"<<c<<" son: "<<endl;
    cout<<"Raiz 1 = "<<raiz1<<endl;
    cout<<"Raiz 2 = "<<raiz2<<endl;
}else
cout<<"No tiene raices reales"<<endl;
}else{
    cout<<"No es un polinimio de grado 2"<<endl;
}
    system("pause");
    return 0;
}
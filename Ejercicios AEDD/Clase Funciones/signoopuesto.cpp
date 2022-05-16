#include <iostream>

using namespace std;

void cambiarSigno(int& x);

int main(){
int num;
cin>>num;
cout<<"Antes: "<<num<<"."<<endl;
cambiarSigno(num);
cout<<"Despues: "<<num<<"."<<endl;

    return 0;
}


void cambiarSigno(int& x){
    x*=-1;
}
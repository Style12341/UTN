#include <iostream>

using namespace std;

#define N 5
bool todosIguales(int V[]);
int main(){
int vector[N]={5};
cout<<todosIguales(vector);


    return 0;
}


bool todosIguales(int V[]){
    int tam= sizeof(V)/4;
    bool state=true;
    int counter=0;
    while(state && counter<tam-1){

        state= V[counter]==V[++counter];
    }
    
    return state;
}
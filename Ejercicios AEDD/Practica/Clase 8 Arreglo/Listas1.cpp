#include <iostream>

using namespace std;

int insertarPosterior(int V[],int &tl);

int main(){
 int pepito[90]={0,100,2,200,1,2,500};
   int tl=7;
   int inserciones= insertarPosterior(pepito,tl);
    cout<<"Se realizaron la siguiente cantidad de inserciones: "<<inserciones<<endl;

    for (int i = 0; i < tl; i++)
    {
       cout<<pepito[i]<<endl;
    }
    
    return 0;
}

int insertarPosterior(int V[],int &tl){
    int counter=0;
    for (int i = 0; i < tl; i++)
    {
        if(V[i]%100==0){
            for (int j = tl; j > i; j--)
            {
                V[j]=V[j-1];

            }
            V[i]=V[i+1]+1;
            counter++;
            i++;
            tl++;
        }
    }
    
return counter;
}
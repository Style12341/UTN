#include <iostream>

using namespace std;

int maxDigito(int num);

int main(){
    int num;
    cin>>num;
    cout<<maxDigito(num);
    return 0;
}
int maxDigito(int num){
    if (num<10) return num;
    if (num%10 ==9) return 9;
    if (num%10 > maxDigito(num/10)) return (num%10);
    return maxDigito(num/10);


}
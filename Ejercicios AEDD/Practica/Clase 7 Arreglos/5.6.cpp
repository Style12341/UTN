#include <iostream>
using namespace std;

int main()
{
    char t;
    int letras[26] = {0};
    int total = 0;
    while (cin >> t)
    {
        int letra;
        letra = (int)t - 97;
        letras[letra]++;
        total++;
    }
    for (int i = 0; i < 26; i++)
    {
        char c = i + 97;
        if(letras[i] !=0)
        cout << c << ": " << letras[i] << endl;
    }
    return 0;
}
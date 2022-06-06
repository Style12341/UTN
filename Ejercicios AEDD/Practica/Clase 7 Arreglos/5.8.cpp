#include <iostream>

using namespace std;
bool todosDistintos(int V[]);
int main()
{
    int X[5] = {5, 5, 5, 5, 4};
    cout<<todosDistintos(X);
    return 0;
}

bool todosDistintos(int V[])
{
    bool flag = true;
    int i = 0, j;
    int tam = sizeof(V) / 4;
    while (flag && i < tam)
    {
        j = i + 1;
        while (flag && j < tam)
        {
            if (V[j] == V[i])
            {
                flag = false;
            }

            j++;
        }

        i++;
    }
    return flag;
}
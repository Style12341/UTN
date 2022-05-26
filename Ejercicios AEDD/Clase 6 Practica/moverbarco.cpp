#include <iostream>
#include <cmath>

using namespace std;

void Mover(float &posX, float &posY, char direccion, float amplitud);
int main()
{
    float posX, posY, amplitud;
    char direccion;
    cout << "Ingrese la posicion del barco en coordenads cartesianas" << endl;
    cin >> posX >> posY;
    cout << "Ingrese la direccion seguido de la amplitud" << endl;
    cin >> direccion >> amplitud;
    Mover(posX, posY, toupper(direccion), amplitud);
    cout << "El barco esta en la posicion X = " << posX << " Y = " << posY << endl;

    return 0;
}

void Mover(float &posX, float &posY, char direccion, float amplitud)
{
    switch (direccion)
    {
    case 'A':
        posY += amplitud;
        break;
    case 'B':
        posX += amplitud;
        posY += amplitud;
        break;
    case 'C':
        posX += amplitud;
        break;
    case 'D':
        posX += amplitud;
        posY -= amplitud;
        break;
    case 'E':
        posY -= amplitud;
        break;
    case 'F':
        posX -= amplitud;
        posY -= amplitud;
        break;
    case 'G':
        posX -= amplitud;
        break;
    case 'H':
        posX -= amplitud;
        posY += amplitud;
        break;
    }
}
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Definicion de variables
    float gananciaTotalDia, gananciaTotalSemana = 0, gananciaMaxima = 0, pgananciaMaxima;
    int cantidadVendida, numeroProducto, pcongananciaMaxima;
    /* Las siguientes variables sirven para podes mostrar directamente al final cuales son los productos con mayor ganancia y cual es esa ganancia.
    Esto simplemente para evitar obtener informacion en el medio del ingreso de datos, por mas que con la herramientas actuales conlleve crear
    muchas variables*/
    int mayorGPD1, mayorGPD2, mayorGPD3, mayorGPD4, mayorGPD5, mayorGPD6, mayorGPD7;                                                           // Mayor Ganancia Producto Dia x (Nº Producto)
    float mayorGMD1, mayorGMD2, mayorGMD3, mayorGMD4, mayorGMD5, mayorGMD6, mayorGMD7;                                                         // Mayor Ganancia Maxima Dia x (Ganancia)
    float gananciaTotalDia1, gananciaTotalDia2, gananciaTotalDia3, gananciaTotalDia4, gananciaTotalDia5, gananciaTotalDia6, gananciaTotalDia7; // Ganancia total de cada dia
    // Se declaran las constantes con los precios de los productos (por posible cambio en el futuro)
    const float p1 = 2.98;
    const float p2 = 4.50;
    const float p3 = 9.98;
    const float p4 = 4.49;
    const float p5 = 6.87;
    // Comienza el ciclo for correspondiente al dia de la semana
    for (int i = 1; i <= 7; i++)
    {
        /*Inicializamos al ganancia total del dia como 0 para asi comenzar cada nuevo dia con
        una ganancia 0 asi pudiendo sumarle las correspondientes en el siguiente ciclo for */
        gananciaTotalDia = 0;
        pgananciaMaxima = 0;
        cout << "Ingrese todos los productos en orden correspondientes al dia ";
        // Un switch para avisarle al usuario sobre que dia esta siendo realizada la carga de datos
        switch (i)
        {
        case 1:
            cout << "Lunes." << endl;
            break;
        case 2:
            cout << "Martes." << endl;
            break;
        case 3:
            cout << "Miercoles." << endl;
            break;
        case 4:
            cout << "Jueves." << endl;
            break;
        case 5:
            cout << "Viernes." << endl;
            break;
        case 6:
            cout << "Sabado." << endl;
            break;
        case 7:
            cout << "Domingo." << endl;
            break;
        }
        // Comienza el ciclo for correspondiente a cada producto
        for (int j = 1; j <= 5; j++)
        {
            float gananciaTotalDiaPx;
            // Verificamos que los productos sean ingresados en orden (nos sirve para evitar la repeticion de un producto)
            do
            {
                cout << "Ingrese el numero de producto " << j << " seguido de su cantidad vendida. Ex (1 Cantidad-vendida)" << endl;
                cin >> numeroProducto;
            } while (numeroProducto != j);
            cin >> cantidadVendida;
            // ****Enseñenos arrays****. Verificamos que producto es para asi multiplicarlo por su precio para sumarselo a la ganancia total del dia
            switch (numeroProducto)
            {
            case 1:
                gananciaTotalDiaPx = p1 * cantidadVendida;
                break;
            case 2:
                gananciaTotalDiaPx = p2 * cantidadVendida;
                break;
            case 3:
                gananciaTotalDiaPx = p3 * cantidadVendida;
                break;
            case 4:
                gananciaTotalDiaPx = p4 * cantidadVendida;
                break;
            case 5:
                gananciaTotalDiaPx = p5 * cantidadVendida;
                break;
            }
            /*Aqui en luego de todo el bucle termina asignando a pgananciaMaxima la mayor ganancia ($) obtenida
            y asigna a pcongananciaMaxima el numero de producto con mayor ganancia*/
            if (gananciaTotalDiaPx > pgananciaMaxima)
            {
                pgananciaMaxima = gananciaTotalDiaPx;
                pcongananciaMaxima = j;
            }
            // Sumamos a la ganancia total del dia la ganancia total del producto actual evaluado
            gananciaTotalDia += gananciaTotalDiaPx;
            // Con este if nos aseguramos de que el switch siguiente no se realize a menos que haya terminado el ingreso de productos por el dia actual
            if (j == 5)
            {
                /*Este switch asigna a una variable mayorGPDX el numero de producto con mayor ganancia
                a mayorGMDX asigna la ganancia maxima que genero ese producto en ese dia
                y a gananciaTotalDiaX le asigna la ganancia total del dia evaluado*/
                switch (i)
                {
                case 1:
                    mayorGPD1 = pcongananciaMaxima;
                    mayorGMD1 = pgananciaMaxima;
                    gananciaTotalDia1 = gananciaTotalDia;
                    break;
                case 2:
                    mayorGPD2 = pcongananciaMaxima;
                    mayorGMD2 = pgananciaMaxima;
                    gananciaTotalDia2 = gananciaTotalDia;
                    break;
                case 3:
                    mayorGPD3 = pcongananciaMaxima;
                    mayorGMD3 = pgananciaMaxima;
                    gananciaTotalDia3 = gananciaTotalDia;
                    break;
                case 4:
                    mayorGPD4 = pcongananciaMaxima;
                    mayorGMD4 = pgananciaMaxima;
                    gananciaTotalDia4 = gananciaTotalDia;
                    break;
                case 5:
                    mayorGPD5 = pcongananciaMaxima;
                    mayorGMD5 = pgananciaMaxima;
                    gananciaTotalDia5 = gananciaTotalDia;
                    break;
                case 6:
                    mayorGPD6 = pcongananciaMaxima;
                    mayorGMD6 = pgananciaMaxima;
                    gananciaTotalDia6 = gananciaTotalDia;
                    break;
                case 7:
                    mayorGPD7 = pcongananciaMaxima;
                    mayorGMD7 = pgananciaMaxima;
                    gananciaTotalDia7 = gananciaTotalDia;
                    break;
                }
            }
        }
        gananciaTotalSemana += gananciaTotalDia;
    }
    cout << fixed;
    cout << "El producto que dio mas ganancia en el dia:" << endl;
    cout << "*Lunes:     Producto Nº" << mayorGPD1 << " con $" << setprecision(2) << mayorGMD1 << " de ganancia." << endl;
    cout << "*Martes:    Producto Nº" << mayorGPD2 << " con $" << setprecision(2) << mayorGMD2 << " de ganancia." << endl;
    cout << "*Miercoles: Producto Nº" << mayorGPD3 << " con $" << setprecision(2) << mayorGMD3 << " de ganancia." << endl;
    cout << "*Jueves:    Producto Nº" << mayorGPD4 << " con $" << setprecision(2) << mayorGMD4 << " de ganancia." << endl;
    cout << "*Viernes:   Producto Nº" << mayorGPD5 << " con $" << setprecision(2) << mayorGMD5 << " de ganancia." << endl;
    cout << "*Sabado:    Producto Nº" << mayorGPD6 << " con $" << setprecision(2) << mayorGMD6 << " de ganancia." << endl;
    cout << "*Domingo:   Producto Nº" << mayorGPD7 << " con $" << setprecision(2) << mayorGMD7 << " de ganancia." << endl;
    cout << "Las gananancias totales en el dia: " << endl;
    cout << "*Lunes:     $" << setprecision(2) << gananciaTotalDia1 << endl;
    cout << "*Martes:    $" << setprecision(2) << gananciaTotalDia2 << endl;
    cout << "*Miercoles: $" << setprecision(2) << gananciaTotalDia3 << endl;
    cout << "*Jueves:    $" << setprecision(2) << gananciaTotalDia4 << endl;
    cout << "*Viernes:   $" << setprecision(2) << gananciaTotalDia5 << endl;
    cout << "*Sabado:    $" << setprecision(2) << gananciaTotalDia6 << endl;
    cout << "*Domingo:   $" << setprecision(2) << gananciaTotalDia7 << endl;
    cout << "La ganancia total de la semana fue: $" << setprecision(2) << gananciaTotalSemana << endl;
    return 0;
}
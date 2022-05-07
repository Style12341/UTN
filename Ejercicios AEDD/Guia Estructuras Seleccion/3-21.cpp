#include <iostream>
#include <iomanip>
using namespace std;
/* Una empresa de ventas por correo vende cinco productos distintos, cuyos precios se muestran en la
tabla siguiente:
Número de producto Precio unitario
1 2.98
2 4.50
3 9.98
4 4.49
5 6.87
Escribir un programa que lea renglón a renglón una sucesión de pares de números, correspondientes a
las ventas de una semana , como sigue:
Número-de-producto Cantidad-vendida-en-un-día
Se deben cargar los 5 productos, con su cantidad vendida, por cada dia de la semana. Tomando como
semana de Lunes a Domingo. Cada lote de 5 productos, representará la venta diaria. Ese proceso, se
debe realizar por cada día de la semana propuesta.
El programa deberá calcular y mostrar por pantalla:
        ● El producto que dio más ganancia por cada día.
        ● La ganancia total del día.
        ● El valor total facturado en la semana.
La carga termina cuando se ingresa toda la carga semanal. */

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
        una ganancia 0 asi pudiendo sumarle las correspondientes en el siguiente ciclo for.
        Tambien asignamos la ganancia maxima del producto de cada dia y asignamos que este
        producto empieze siendo el nulo (0), para asi evitar problemas mas adelante.*/
        gananciaTotalDia = 0;
        pgananciaMaxima = 0;
        pcongananciaMaxima = 0;
        bool error = false;
        cout << "Ingrese todos los productos en orden correspondientes al dia ";
        // Un switch para informarle al usuario sobre que dia esta siendo realizada la carga de datos
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
                /* Lo que sigue hasta el comentario marcado es para evitar un error al ingresar un dato que no sea entero,
                no encontramos otra forma de hacerlo asi que averiguamos de que manera se podria hacer e intentamos hacerlo
                lo menos alejado posible de lo que sabemos, el resto fue prueba y error. No sabiamos si agregarlo o no pero
                queriamos evitar este error.*/
                cin >> numeroProducto;
                //Validamos el primer cin, si no es valido se informa al usuario que para continuar debe escribi 0 (o cualquier otra cosa).
                if (!cin)
                {
                    cout << "Solo ingrese numeros enteros" << endl;
                    cout << "Escriba 0 y presione enter para volver al ingreso de datos" << endl;
                    cin.clear();
                    cin.ignore();
                    error = true;
                }
                else{
                    cin >> cantidadVendida;
                if (!cin)
                {
                    cout << "Solo ingrese numeros enteros" << endl;
                    cout << "Escriba 0 y presione enter para volver al ingreso de datos" << endl;
                    cin.clear();
                    cin.ignore();
                    error = true;
                }
                }
                /* **Comentario Marcado** Lo que esta entre este y el anterior donde se comienza a explicar se podria obviar
                , borarrlo y escribir las siguientes lineas en su lugar:
                
                cin >> numeroProducto>> cantidadVendida;
                
                */
                if (numeroProducto != j)
                {
                    cout << "Ingrese el numero de producto correcto (" << j << ")" << endl;
                }
                if (cantidadVendida < 0)
                {
                    cout << "No puede ingresar una cantidad vendida Negativa" << endl;
                }
            } while (numeroProducto != j or cantidadVendida < 0 or error);

            // *Enseñenos arrays*. Verificamos que producto es para asi multiplicarlo por su precio para sumarselo a la ganancia total del dia
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
                /*   *Enseñenos arrays parte 2*
                Este switch asigna a una variable mayorGPDX el numero de producto con mayor ganancia
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
    // *****Enseñenos Strings**** Se podria haber realizando creando un string resultado  utlizando el operador ternario ?.
    if (mayorGPD1 != 0)
    {
        cout << "*Lunes:     Producto numero " << mayorGPD1 << " con $" << setprecision(2) << mayorGMD1 << " de ganancia." << endl;
    }
    else
        cout << "No se vendio nada el dia Lunes." << endl;
    if (mayorGPD2 != 0)
    {
        cout << "*Martes:    Producto numero " << mayorGPD2 << " con $" << setprecision(2) << mayorGMD2 << " de ganancia." << endl;
    }
    else
        cout << "No se vendio nada el dia Martes." << endl;
    if (mayorGPD3 != 0)
    {
        cout << "*Miercoles: Producto numero " << mayorGPD3 << " con $" << setprecision(2) << mayorGMD3 << " de ganancia." << endl;
    }
    else
        cout << "No se vendio nada el dia Miercoles." << endl;
    if (mayorGPD4 != 0)
    {
        cout << "*Jueves:    Producto numero " << mayorGPD4 << " con $" << setprecision(2) << mayorGMD4 << " de ganancia." << endl;
    }
    else
        cout << "No se vendio nada el dia Jueves." << endl;
    if (mayorGPD5 != 0)
    {
        cout << "*Viernes:   Producto numero " << mayorGPD5 << " con $" << setprecision(2) << mayorGMD5 << " de ganancia." << endl;
    }
    else
        cout << "No se vendio nada el dia Viernes." << endl;
    if (mayorGPD6 != 0)
    {
        cout << "*Sabado:    Producto numero " << mayorGPD6 << " con $" << setprecision(2) << mayorGMD6 << " de ganancia." << endl;
    }
    else
        cout << "No se vendio nada el dia Sabado." << endl;
    if (mayorGPD7 != 0)
    {
        cout << "*Domingo:   Producto numero " << mayorGPD7 << " con $" << setprecision(2) << mayorGMD7 << " de ganancia." << endl;
    }
    else
        cout << "No se vendio nada el dia Domingo." << endl;

    cout << "Las gananancias totales en el dia: " << endl;
    cout << "*Lunes:     $" << setprecision(2) << gananciaTotalDia1 << endl;
    cout << "*Martes:    $" << setprecision(2) << gananciaTotalDia2 << endl;
    cout << "*Miercoles: $" << setprecision(2) << gananciaTotalDia3 << endl;
    cout << "*Jueves:    $" << setprecision(2) << gananciaTotalDia4 << endl;
    cout << "*Viernes:   $" << setprecision(2) << gananciaTotalDia5 << endl;
    cout << "*Sabado:    $" << setprecision(2) << gananciaTotalDia6 << endl;
    cout << "*Domingo:   $" << setprecision(2) << gananciaTotalDia7 << endl;
    cout << "La ganancia total de la semana fue: $" << setprecision(2) << gananciaTotalSemana << endl;
    system("pause");
    return 0;
}
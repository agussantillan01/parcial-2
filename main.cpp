#include <iostream>
#include <cstdlib>
#include <cstdio>
#include<cstring>
#include <ctime>

using namespace std;
#include "funciones.h"
#include "resoluciones.h"

int main()
{
int opcion;
//vectores tipo int de los puntos
///PUNTO A
int plantaPorProductos [20]={0};
///PUNTO B
int produccionMayor=0;
///PUNTO C
int productoSinFabricar [50]={0};
while (true){
            system("cls"); //limpia pantalla
        cout << "MENU PRINCIPAL "<< endl << "----------------------------------"<< endl;
        cout << "1 - CARGAR DATOS"<<endl;
        cout << "2 - PUNTO A"<<endl;
        cout << "3 - PUNTO B"<<endl;
        cout << "4 - PUNTO c "<<endl;
        cout << "----------------------------------"<<endl;
        cout << "6 - Salir"<<endl;

        cout << endl<< "> ";
        cin>> opcion;
        system ("cls");

    switch (opcion){
        case 1:
            //los vectorers declarados en el main
            cargaDeDatos(plantaPorProductos, produccionMayor,productoSinFabricar);
            break;
        case 2:
            puntoA(plantaPorProductos);
            break;
        case 3:
            puntoB(produccionMayor);

            break;
        case 4:
            puntoC (productoSinFabricar);
            break;
        case 6:
            cout << "GRACIAS POR USAR EL PROGRAMA!! =)"<<endl;
            return 0;
            break;
        default:
            cout << "NUMERO INGRESADO INCORRECTO"<<endl;
            break;
    }
    system("pause");
    }


    return 0;
}

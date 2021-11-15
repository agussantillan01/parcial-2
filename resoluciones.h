#ifndef RESOLUCIONES_H_INCLUDED
#define RESOLUCIONES_H_INCLUDED
void cargaDeDatos (int plantaPorProductos [20],int produccionMayor,int productoSinFabricar[50]){
    int nProduccion,planta, cProducto, unidades, costo,nProducto, nPlanta,b=0, mayor;

    cout << endl<< "\t\t\t\tPLANTA METALURGICA"<< endl<< "\t\t\t\t---------------------"<<endl;
    cout << "INGRESE: "<<endl;
    cout << "Numero de produccion: ";
    cin >> nProduccion;


    while (nProduccion !=0){
    cout << endl<< "Numero de planta(10 a 30):  ";
    cin >> nPlanta;
    while (nPlanta<10 || nPlanta>30){
        cout <<endl<< "ERROR ! - NUMERO DE PLANTA INCORRECTO, RECUERDE QUE ES DEL 10 AL 30: "<<endl;
        cout << "INGRESE NUEVAMENTE:  ";
        cin >> planta;
    }
    cout << endl<< "Codigo de producto (1 a 50):  ";
    cin >> cProducto;
        while (cProducto<1 || cProducto>50){
        cout << endl<< "ERROR ! - CODIGO DE PRODUCUTO INCORRECTO, RECUERDE QUE ES DEL 1 AL 50: "<<endl;
        cout << "INGRESE NUEVAMENTE:  ";
        cin >> cProducto;
    }
    cout << endl<< "Cantidad de unidades producidas:  ";
    cin >> unidades;

    cout << endl<< "Costo:  $ ";
    cin >> costo;
    ///termina la carga de datos

    ///PUNTO A
    plantaPorProductos[nPlanta-1]+=unidades;
    ///PUNTO B
    if (b==0){
        mayor=costo;
        produccionMayor=nProduccion;
        b=1;

    }
    else {
            if (b!=0){
            if (costo>mayor){
            mayor=costo;
            produccionMayor=nProduccion;
        }

            }


    }

    ///PUNTO C
    nProducto= cProducto-1;
    productoSinFabricar [nProducto]++;




    cout << endl;
    system("cls");
    cout << "Numero de produccion: ";
    cin >> nProduccion;
}



}



///desarrollo de los puntos
// punto a
void puntoA (int plantaPorProductos [20]){
    int x;
    cout << "cantidad de produccion fabricadas por planta: "<<endl;
    for (x=0; x<20; x++){
            cout << "PLANTA "<< x+10 << ":  ";
        cout << plantaPorProductos[x]<<endl;
    }
}




///DESARROLLO DEL PUNTO B
void puntoB (int produccionMayor){
cout << endl <<"La orden de produccion con mayor costo"<<endl;
cout << "ORDEN NUMERO: "<<produccionMayor <<endl;

}


///DESARROLLO DEL PUNTO C
void puntoC (int productoSinFabricar[50]){
    int x;
    cout << "LOS PRODUCTOS SIN FABRICAS SON: "<<endl;
    for (x=0; x<50; x++){
    if (productoSinFabricar[x]==0){
        cout << "producto numero: "<< x+1<<endl;
    }
    }
}




#endif // RESOLUCIONES_H_INCLUDED

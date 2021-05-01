#include <iostream>
#include "problemas.h"
using namespace std;

int main()
{
    int n;
    cout<<"Ingrese el problema a ver: ";
    cin>>n;
    switch (n) {

case 11: {
    char reserva, silla[3];
    silla[2]='\0';
    while(true){
        cout<<"Ingrese I para realizar una reserva o ingrese C para cancelar una reserva: ";
        cin>> reserva;
        cout<< "ingrese la silla: ";
        cin>> silla;
        problema11(reserva, silla);
    }
    break;

    case 15: {
        int rectangulo1[4]={};
        int rectangulo2[4]={};
        //Datos primer  rectangulo
        cout<<"Este programa permite hallar la  interseccion entre un par de rectangulos"<<endl;
        cout<<"-------------------------------------------------------------------------"<<endl;

        cout << "Ingrese las coordenadas en X del primer rectangulo " << endl;
        cin >> rectangulo1[0];
        cout << "Ingrese las coordenadas en Y del primer rectangulo " << endl;
        cin >> rectangulo1[1];
        cout << "Ingrese el ancho del primer rectangulo " << endl;
        cin >> rectangulo1[2];
        cout << "Ingrese la altura del primer rectangulo " << endl;
        cin >> rectangulo1[3];

        //Datos segundo rectangulo
        cout << "Ingrese las coordenadas en X del segundo rectangulo " << endl;
        cin >> rectangulo2[0];
        cout << "Ingrese las coordenadas en Y del segundo rectangulo " << endl;
        cin >> rectangulo2[1];
        cout << "Ingrese el ancho del segundo rectangulo " << endl;
        cin >> rectangulo2[2];
        cout << "Ingrese la altura del segundo rectangulo " << endl;
        cin >> rectangulo2[3];
        cout<<endl;
        problema15(rectangulo1,rectangulo2);

    }

    case 18: {

    }
    return 0;
}
}}

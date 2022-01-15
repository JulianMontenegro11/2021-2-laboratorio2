#include <iostream>
#include "problemas.h"

using namespace std;

int main()
{
cout<<"Informatica 2 - Laboratorio 2 // Julian Montenegro // Universidad de Antioquia"<<endl;
cout<<endl;
bool continuar=true;
char con;
int menu;

while (continuar==true){  // ciclo para continuar cargando problemas

    cout<< "Ingrese el problema que desea validar :";
    cin>>menu;
    cout<<endl;

    switch (menu) {

    case 1:{
        int valor;
        cout<<"Se necesita un programa que permita determinar la minima combinacion de billetes y monedas para"<<endl;
        cout<<"una cantidad de dinero determinada. Los billetes en circulación son de 50.000, 20.000, 10.000, 5.000, 2.000"<<endl;
        cout<<"y 1.000, y las monedas son de 500, 200, 100 y 50. Hacer un programa que entregue el numero de billetes"<<endl;
        cout<<"y monedas de cada denominacion para completar la cantidad deseada. Si por medio de los billetes y monedas"<<endl;
        cout<<"disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla. Use arreglos"<<endl;
        cout<<"y ciclos para realizar el programa"<<endl;
        cout<<endl;
        cout<<"Por favor ingrese el valor a procesar: ";
        cin>>valor;
        problema1(valor);

        break;
    }// final caso 1

    case 3: {

        char cadena1[]={"Hola"}, cadena2[]={"Hola"};

        cout<<"Haga una funcion que compare 2 cadenas de caracteres y retorno un valor logico verdadero si son"<<endl;
        cout<<"iguales y falso en caso contrario, no olvide también tener en cuenta la longitud de las cadenas. Escriba un programa"<<endl;
        cout<<"de prueba."<<endl;

        problema3(cadena1,cadena2);
        if(problema3(cadena1,cadena2)==true){
            cout<<"Las cadenas de caracteres son iguales"<<endl;
        }else{
            cout<<"Las cadenas de caracteres son diferentes"<<endl;
        }

    break;

    } // Final caso 3

    case 5:{
        int entero;
        char *cadena;
        cout<<"Haga una funcion que reciba un numero entero (int) y lo convierta a cadena de caracteres. Use"<<endl;
        cout<<"parametros por referencia para retornar la cadena. Escriba un programa de prueba."<<endl;
        cout<<"Ingrese el numero entero: ";
        cin>>entero;

        problema5(entero,cadena);


        break;
    }   //fina caso 5

    } // Final switch


} // Final while principal

    return 0;
}

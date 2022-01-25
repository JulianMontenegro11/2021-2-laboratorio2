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

    cout<<"Ingrese el problema que desea validar? (1,3,5,8,10,12,13,14,16,18) :";
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


    case 8 :{
        char cadena[]={"hbhjn4637hfyd765"};
        cout<<"Escriba un programa que reciba una cadena de caracteres y separe los numeros del resto de caracteres,"<<endl;
        cout<<"generando una cadena que no tiene numeros y otra con los números que habia en la cadena original."<<endl;
        cout<<endl;

        problema8(cadena);


        break;
    } //final problema 8

    case 10:{

        char NumRomano[]={"CMLIII"};
        cout<<"Escribir un programa que permita convertir un numero en el sistema romano al sistema arabigo"<<endl;
        cout<<"usado actualmente."<<endl;
        cout<<endl;

        problema10(NumRomano);


        break;
    } // FInal problema 10

    case 12:{


        break;
    } // Final problema 12

    case 13:{

        cout<<"Se tiene una fotografia digitalizada de una porcion de la galaxia NGC 1300 que esta ubicada a"<<endl;
        cout<<"61.000.000 de anios luz del planeta Tierra. La representacion digital de la imagen esta constituida por una matriz"<<endl;
        cout<<"de numeros enteros; en la cual, cada uno representa la cantidad de luz en ese punto de la imagen"<<endl<<endl;
        cout<<"Elabore y pruebe una funcion que reciba un puntero a la matriz de enteros como argumento y que retorne el numero"<<endl;
        cout<<"de estrellas encontradas en la imagen. Ignore las posibles estrellas que puedan existir en los bordes de la matriz."<<endl<<endl;

        int estrellas,matriz[6][8]={{0,3,4,0,0,0,6,8},{5,13,6,0,0,0,2,3},{2,6,2,7,3,0,10,0},{0,0,4,15,4,1,6,0},{0,0,7,12,6,9,10,4},{5,0,6,10,6,4,8,0}};
           estrellas=problema13(&matriz[0][0]); // Se entrega la d<ireccion de memoria de la primera pocision de la matriz
           cout<<"La cantidad de estremmas en la imagen es: "<<estrellas<<endl;

        break;
    } // Final problema 13

    case 14:{
        cout<<"Elabore un programa que llene una matriz 5x5 con los numeros del 1 al 25 y la imprima, luego"<<endl;
        cout<<"imprima la matriz rotada 90, 180 y 270 grados."<<endl<<endl;

    problema14();
        break;
    } // FInal probelma 14



    } // Final switch


} // Final while principal

    return 0;
}

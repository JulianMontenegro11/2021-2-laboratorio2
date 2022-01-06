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

    cout<< "Ingrese el problema que desea alidar :";
    cin>>menu;
    cout<<endl;

    switch (menu) {

    case 1:{
        cout<<"Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para"<<endl;
        cout<<"una cantidad de dinero determinada. Los billetes en circulación son de $50.000, $20.000, $10.000, $5.000, $2.000"<<endl;
        cout<<"y $1.000, y las monedas son de $500, $200, $100 y $50. Hacer un programa que entregue el número de billetes"<<endl;
        cout<<"y monedas de cada denominación para completar la cantidad deseada. Si por medio de los billetes y monedas"<<endl;
        cout<<"disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla. Use arreglos"<<endl;
        cout<<"y ciclos para realizar el programa"<<endl;




    }// final caso 1

    }


} // Final while principal

    return 0;
}

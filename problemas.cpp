#include "problemas.h"

void problema1(int valor)
{
  int billete,contador=0;
  while(contador<=10){
      if(contador==0){ // para billetes de 50000
          billete=valor/50000;
          valor=valor-(billete*50000);
          contador++;
          cout<<"50000: "<<billete<<endl;

      }
      if(contador==1){ // para billetes de 20000
          billete=valor/20000;
          valor=valor-(billete*20000);
          contador++;
          cout<<"20000: "<<billete<<endl;
      }
      if(contador==2){//para billetes de 10000
          billete=valor/10000;
          valor=valor-(billete*10000);
          contador++;
          cout<<"10000: "<<billete<<endl;
      }
      if(contador==3){ // para billetes de 5000
          billete=valor/5000;
          valor=valor-(billete*5000);
          contador++;
          cout<<"5000: "<<billete<<endl;

      }
      if(contador==4){ // para billetes de 2000
          billete=valor/2000;
          valor=valor-(billete*2000);
          contador++;
          cout<<"2000 :"<<billete<<endl;
      }

     if(contador==5){ //para billetes de 1000
         billete=valor/1000;
         valor=valor-(billete*1000);
         contador++;
         cout<<"1000: "<<billete<<endl;
     }
     if(contador==6){//para monedas de 500
         billete=valor/500;
         valor=valor-(billete*500);
         contador++;
         cout<<"500: "<<billete<<endl;
     }
     if(contador==7){//para monedas de 200
         billete=valor/200;
         valor=valor-(billete*200);
         contador++;
         cout<<"200: "<<billete<<endl;
     }
     if(contador==8){//para monedas de 100
         billete=valor/100;
         valor=valor-(billete*100);
         contador++;
         cout<<"100: "<<billete<<endl;
     }
     if(contador==9){//para monedas de 50
         billete=valor/50;
         valor=valor-(billete*50);
         contador++;
         cout<<"50: "<<billete<<endl;
     }
     if(contador==10){//restante
         cout<<"restante: "<<valor<<endl;
         contador++;
     }
  }//fin del ciclo

}//fin funcion problema1

bool problema3(char *c1, char *c2)
{
    bool salida = true;
    if(longitud_char(c1)!=longitud_char(c2)){
        salida=false;
    }
    else{
        for(int i=0;c1[i]!='\0';i++){
            if(c1[i]!=c2[i]) salida=false;
        }

    }
    return salida;


} // final funcion problema3


void problema5(int entero, char *cadena)
{
    int contador=0, a=entero;
    while(a>0){
        a=a/10;
        contador++;
    }
    cadena[contador]='\0';
    a=entero;
    int posicion=contador-1,digito;

    while(posicion>=0){
        digito=a%10;
        a=a/10;
        cadena[posicion]=digito + '0';
        posicion--;

    }
    cout<<"La cadena de caracteres es: "<<cadena<<endl;

}

void problema8(char *c1){
    int posicion1=0, posicion2=0, cantidad1=0, cantidad2=0;

    for (int i=0;c1[i]!='\0';i++){ // validar cantidad de letras
        if(isalpha(c1[i])){
            cantidad1++;
        }
    }
    for( int i=0;c1[i]!='\0';i++){ // validar cantidad de numeros
        if(!isalpha(c1[i])){
            cantidad2++;
        }
    }

    char texto [cantidad1+1];
    char num [cantidad2+1];

    for(int i=0;c1[i]!='\0';i++){
        if(isalpha(c1[i])){
            texto[posicion1] = c1[i];
            posicion1++;
        }else{
            num[posicion2]=c1[i];
            posicion2++;
        }
    }

    cout<<"Cadena: "<<c1<<"   "<<"Texto: "<<texto<<"   "<<"numeros: "<<num<<endl;

}

void problema10(char *c1)
{
    int numArabigo=0,siguiente,anterior,cantidad=-1,aux;
    for(int i=0;c1[i]!='\0';i++){
        cantidad++;
    }
    aux=cantidad;
    for(;cantidad!=-1;cantidad--){

        if(c1[cantidad]=='M') siguiente=1000 ;
        if(c1[cantidad]=='D') siguiente=500;
        if(c1[cantidad]=='C') siguiente=100;
        if(c1[cantidad]=='L') siguiente=50;
        if(c1[cantidad]=='X') siguiente=10;
        if(c1[cantidad]=='V') siguiente=5;
        if(c1[cantidad]=='I') siguiente=1;


        if(cantidad==aux) {
            numArabigo=siguiente;
            anterior=siguiente;
        }
        else{
            if(siguiente>=anterior) numArabigo=numArabigo+siguiente;
            else numArabigo=numArabigo-siguiente;
            anterior=siguiente;
        }
    }
    cout<<"El numero romano "<<c1<<" en arabigo es: "<<numArabigo<<endl;
    cout<<endl;
}

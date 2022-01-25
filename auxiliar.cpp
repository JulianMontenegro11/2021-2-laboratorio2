#include "auxiliar.h"
#include <iostream>

int longitud_char(char *c)
{
    int i=0;
    for(;c[i]!='\0';i++);
    return i+1;

}

#include "auxiliar.h"

int longitud_int(int valor)
{
    int contador=0,digito ;
    for(;valor!=0;contador++){
        digito=valor%10;
        valor=valor/10;

    }

    return contador+1;
}

int cantidad_numeros(char *cadena)
{
   int cantidad=0;
   for(int i=0;cadena[i]!='\0';i++){
       if(!isalpha(cadena[i])){
           cantidad++;
       }
   }
   return cantidad+1;
}

int cantidad_letras(char *cadena)
{
    int cantidad=0;
    for(int i=0;cadena[i]!='\0';i++){
        if(isalpha(cadena[i])){
            cantidad++;
        }
    }
    return cantidad;
}

void ImprimirMatriz(int **matriz)
{
    for (int i=0; i<5; i++ ) {
        for (int j=0; j<5; j++) {
            cout<<matriz[i][j] << '\t';
        }
        cout << endl << endl;
    }
}

void RotarMatriz(int **matriz)
{
    int copia[5][5],copia_2[5][5],copia_3[5][5],rotar;
    for(int i =0; i<5;i++){ // con este primer for se copia la matriz original en una nueva variable
        for(int j=0;j<5;j++){
            copia[i][j]=matriz[i][j];
            copia_2[i][j]=matriz[i][j];
            copia_3[i][j]=matriz[i][j];
        }
   }


    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            copia[j][4-i]=matriz[i][j];
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            copia_2[j][4-i]=copia[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            copia_3[j][4-i]=copia_2[i][j];
        }
    }

    cout<<" ¿Cuantos grados desea rotar la matriz?, oprima 1 para 90 grados, 2 para 180 grados, 3 para 270 grados : ";
    cin>>rotar;
    cout<<endl<<endl<<endl<<endl;


  if(rotar==1){
      for (int i=0; i<5; i++ ) {
          for (int j=0; j<5; j++) {
              cout<<copia[i][j] << '\t';
          }
          cout << endl << endl;
      }
      cout<<endl<<endl<<endl;

  }if(rotar==2){
      for (int i=0; i<5; i++ ) {
          for (int j=0; j<5; j++) {
              cout<<copia_2[i][j] << '\t';
          }
          cout << endl << endl;
      }
      cout<<endl<<endl<<endl;
  }if(rotar==3){
      for (int i=0; i<5; i++ ) {
          for (int j=0; j<5; j++) {
              cout<<copia_3[i][j] << '\t';
          }
          cout << endl << endl;
      }

      cout<<endl<<endl<<endl;
  }

}

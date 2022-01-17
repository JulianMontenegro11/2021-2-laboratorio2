#include "auxiliar.h"

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

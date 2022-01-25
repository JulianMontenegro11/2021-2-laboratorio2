#ifndef AUXILIAR_H
#define AUXILIAR_H
#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int longitud_char(char *c); // confirma la longitud de una cadena de caracteres
int longitud_int(int valor); // confirma la longitud de una cadena de enteros
int cantidad_numeros(char *cadena); // determinan cuantos numeros hay en una cadena de caracteres
int cantidad_letras(char *cadena); // determina cuantas letras hay en una cadena de caracteres
void ImprimirMatriz(int **matriz); // imprime una mtariz (problema 14)
void RotarMatriz(int **matriz);//Rota una matriz 90 grados (problema 14)



#endif // AUXILIAR_H

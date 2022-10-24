#include <stdio.h>
#include <stdlib.h>
#include "string.h"

typedef struct{

 int id;
 char procesador[20];
 char marca[20];
 float precio;




}eNotebook;

float aplicarDescuento(float precio);
int contarCaracteres(char cadena[], char caracter);
int ordenarNotebooks(eNotebook notebooks[], int tam);


int main()
{
    float precio = 250;
    float precioConDescuento;
    char cadena[5] = "auto";
    int letraRepetida;


    precioConDescuento = aplicarDescuento(precio);

    printf("El precio con descuento es: %.2f\n", precioConDescuento);

   letraRepetida = contarCaracteres(cadena, 'a');

    printf("La letra se repitio: %d veces\n", letraRepetida);






    return 0;
}


float aplicarDescuento(float precio){

  float precioConDescuento;
  float descuento;

  descuento = precio * 5 / 100;

  precioConDescuento = precio - descuento;






return precioConDescuento;
}

int contarCaracteres(char cadena[], char caracter){

 int contadorLetra = 0;

 for(int i = 0 ; i < 5 ; i++){


    if(cadena[i] == caracter){

        contadorLetra++;


    }



 }






return contadorLetra;
}



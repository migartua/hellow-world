/**************************************************
* Programa: Triangulo (versión inicial)
*
* Descripción:
*  Este programa escribe el borde de un triángulo
*  aproximadamente equilátero, usando asteriscos.
**************************************************/
#include <stdio.h>

int main () {
  const int N =7; /*altura del triangulo*/

  /*--Escribir el vértice superior --*/
  for (int k = 1; k <= N-1; k++) { /*im going to change a character*/
    printf( "a" );
  }
  printf( "*\n");

  /*-- Imprimir los bordes laterales --*/
  for (int k = 2; k <= N-1; k++) {
    for (int j = 1; j <= N-k; j++) {
      printf(" ");
    }
    printf("*");
    for (int j = 1; j <= 2*k-3; j++){
      printf(" ");
    }
    printf("*\n");
  }

  /*-- Imprimir el borde inferior --*/
  printf( "*" );
  for (int k = 1; k <= N-1 ; k++){
    printf( " *" );
  }
  printf( "\n");
}

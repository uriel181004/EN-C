#include <stdio.h>

int main() {
    /* Manuel Uriel Amador Salinas
    Equipo AMUKE
    21 abr 21 
    Programa 2
    */

   int a, b, c; //Reciben valores enteros
   printf ("Programa 2");
   printf ("Suma de números");
   printf ("Dame el valor de a: ");
   scanf ("%d",&a); //Si vas a recibir un valor entero usa %d
               //Pra indicar la variable donde se guarda usa &variable
   printf ("Dame el valor de b: ");
   scanf ("%d",&b);
   c = a + b; 
   printf ("\n El resultado es %d",c);
   return 0; 
}
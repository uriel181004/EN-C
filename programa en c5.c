#include <stdio.h>

int main ()
{
    /* Manuel Uriel Amador Salinas  
    Equipo AMUKE
    21 abr 21
    Programa 4. Pide dos valores reales, calcula el area del triangulo y muestra resultado
    */

    float base, altura, área;
    printf ("\n\n Programa 4");
    printf ("\n\n Saca el valor de la area");
    printf ("\n\n Dame el valor real de la base");
    scanf ("%f",&base); // Permite capturar un valor real y lo guarda en variable primer
    printf ("\n\n Dame el valor real de la altura");
    scanf ("%f",&altura); // Permite capturar un valor real y lo guarda en variable primer
    área = (base * altura)/2; // Formula matematica para calcular el area del triangulo.
    printf ("\n El area del triangulo es %f",area);

    return   0 ;
}
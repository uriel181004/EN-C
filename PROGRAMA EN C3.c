#include <stdio.h>

int main () 
{
    /* Manuel Uriel Amador Salinas
    Equipo AMUKE
    21 abr 21 
    Programa 3
    */

    float primer, segundo, tercero; 
    printf ("\n\n Programa 3");
    printf ("\n\n Saca el promedio de valores reales");
    printf ("\n\n Dame el primer valor real");
    scanf ("%f",&segundo); //Permite capturar un valor real y lo guarda en variable primer
    printf ("\n\n Dame el segundo valor real");
    scanf ("%f",&segundo); //Permite capturar un valor real y lo guarda en variable primer
    tercero = (primer + segundo)/2;
    printf ("\n El promedio es %f",tercero);
    return 0; 
}
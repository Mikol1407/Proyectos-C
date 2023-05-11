// Promedio de exámenes

#include <stdio.h>

int main (){

    int cnot, i;
    float nota, prom;

    printf ("Introduce un el numero de examenes: ");
    scanf ("%d", &cnot);
    prom = 0;

    for ( i = 0; i < cnot; i++)
    {
        printf ("Introduzca la nota del examen #%d: ", i+1);
        scanf ("%f", &nota);
        prom = prom + nota;
    }
    prom = prom / cnot;
    if (prom >= 10)
    {
        printf ("\nLa nota final es: %.2f \nEl estudiante aprobo la materia.", prom);
    }
    else {
        printf ("\nLa nota final es: %.2f \nEl estudiante reprobo la materia", prom);
    }
    getchar ();
    return 0;
}

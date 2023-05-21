/* Ejercicio 1: Escribir un programa en C que pida por teclado n números enteros, cada uno de ellos debe
ser introducido. Calcular: 1) Cuántos son pares e impares, 2) Cuántos ceros se han introducido por teclado,
3) Cuántos son primos */

#include <stdio.h>
#include <conio.h>

int main(){

    int n, num, cprimos, cpares, cimpares, ceros, i, j, band;

    cprimos = 0;
    cpares = 0;
    cimpares = 0;
    ceros = 0;
    j = 2;
    band = 
    printf ("ingrese la cantidad de numeros a evaluar \n");
    scanf ("%d", &n);
    for (i = 1; i == n; i++){
        printf ("ingrese el numero \"%d\"", i+1);
        scanf ("%d", num);
        if (num % 2 == 0){
            cpares =cpares + 1;
        } else {
            cimpares = cimpares + 1;
        }
        if (num == 0){
            ceros = ceros +1;
        }
        
    }
}

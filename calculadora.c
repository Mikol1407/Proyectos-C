#include <stdio.h>

float sum (float n1, float n2);
float rest (float n1, float n2);
float mul (float n1, float n2);
float div (float n1, float n2);
void scnum (float *n1, float *n2);

int main () {
    int op = 0, rpt = 0;
    float num1 = 0, num2 = 0, resultado;
    do{
    printf ("------------------------------\n");
    printf ("Que operacion desea realizar?\n");
    printf ("------------------------------\n");
    do
    {
    printf ("Ingrese \"1\" para suma\nIngrese \"2\" para resta\nIngrese \"3\" para multiplicacion\nIngrese \"4\" para division\n");
    scanf ("%d", &op);
    switch (op)
    {
    case 1:
        scnum (&num1, &num2);
        resultado = sum (num1, num2);
        printf ("El resultado de la suma es: %.2f\n", resultado);
        break;
    case 2:
        scnum (&num1, &num2);
        resultado = rest (num1, num2);
        printf ("El resultado de la resta es: %.2f\n", resultado);
        break;
    case 3:
        scnum (&num1, &num2);
        resultado = mul (num1, num2);
        printf ("El resultado de la multiplicacion es: %.2f\n", resultado);
        break;
    case 4:
        scnum (&num1, &num2);
        resultado = div (num1, num2);
        printf ("El resultado de la division es %.2f\n", resultado);
    default: 
        break;
    }
    } while (op < 1 || op > 4);
    printf ("¿Desea calcular otro numero?\n");
    printf ("1 = Si\n");
    printf ("0 = No\n");
    scanf ("%d", &rpt);
    } while (rpt == 1);
    printf ("Fin del programa, por favor cierre\n");
    return 0;
}

float sum (float n1, float n2){
    float res = 0;
    res = n1 + n2;
    return (res);
}

float rest (float n1, float n2){
    float res = 0;
    res = n1 - n2;
    return (res);
}

float mul (float n1, float n2){
    float res = 0;
    res = n1 * n2;
    return (res);
}

float div (float n1, float n2){
    if (n2 == 0){
        printf ("Math error");
        return 0;
    }
    float res = 0;
    res = n1 / n2;
    return (res);
}

void scnum (float *n1, float *n2){
    printf ("Ingrese el numero 1\n");
    scanf ("%f", &*n1);
    printf ("Ingrese el numero 2\n");
    scanf ("%f", &*n2);

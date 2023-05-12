#include <stdio.h>

float sum (float n1, float n2);
float rest (float n1, float n2);
float mul (float n1, float n2);
float div (float n1, float n2);
void scnum (float sn1, float sn2);

int main () {
    int op = 0, rpt = 0;
    float num1 = 0, num2 = 0, resultado;
    do{
    printf ("------------------------------\n");
    printf ("¿Qué operacion desea realizar?\n");
    printf ("------------------------------\n");
    do
    {
    printf ("Ingrese \"1\" para suma\nIngrese \"2\" para resta\nIngrese \"3\" para multiplicacion\nIngrese \"4\" para division\n");
    scanf ("%d", &op);
    switch (op)
    {
    case 1:
        void scnum (num1, num2);
        resultado = sum (num1, num2);
        printf ("El resultado de la suma es: %f\n", resultado);
        break;
    case 2:
        void scnum (num1, num2);
        resultado = res (num1, num2);
        printf ("El resultado de la resta es: %f\n", resultado);
        break;
    case 3:
        void scnum (num1, num2);
        resultado = mul (num1, num2);
        printf ("El resultado de la multiplicacion es: %f\n", resultado);
        break;
    case 4:
        void scnum (num1, num2);
        resultado = div (num1, num2);
        printf ("El resultado de la multiplicación es %f\n", resultado);
    default: printf ("error");
            return 1;
        break;
    }
    } while (op < 1 || op > 4)
    printf ("¿Desea calcular otro numero?\n");
    printf ("1 = Si\n");
    printf ("0 = No\n")
    scanf ("%d", &rpt);
    } while (rpt == 1)
    printf ("Fin del programa, por favor cierre")
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

void scnum (float sn1, float sn2){
    printf ("Ingrese el numero 1\n");
    scanf ("%f", &sn1);
    printf ("Ingrese el numero 2\n");
    scanf ("%f", &sn2);
}

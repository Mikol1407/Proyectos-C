/* Ejercicio 2: Desarrolle un programa en C que permita registrar las citas médicas de la clínica ABC de n
cantidad de pacientes, permitiendo mostrar por pantalla: 1) Cantidad de pacientes femeninos y masculinos.
2) Cantidad de pacientes mayores y menores de edad. 3) Que permita validar las fechas de nacimiento de cada
paciente. 4) Los pacientes cuya cédula de identidad termine en un número par y sean del sexo femenino tendrán
un descuento del 15% sobre el costo de la consulta. 5) Los pacientes del sexo masculino que tengan una edad
mayor a 60 años tendrán un descuento del 30% */

#include <stdio.h>
#include <conio.h>


int main(){

    int np, cpf, cpm, cmenor, cmayor, ci, sexo, i, agno, mes, dia, band, band2, anio;
    float precioC, precio;

    printf ("ingrese el precio de las consultas\n");
    scanf ("%f", &precio);

    printf ("Ingrese cantidad de pacientes\n");
    scanf ("%d", &np);

    cmayor = 0;
    cmenor = 0;
    cpm = 0;
    cpf = 0;
    band = 0;
    band2 = 0;
    
    for ( i = 0; i < np ; i++)
    {
        precioC = precio;
        printf ("ingrese la cedula del paciente #%d\n", i+1);
        scanf ("%d", &ci);
        do {
        printf ("Ingrese el sexo del paciente, masculino=0 --- femenino=1\n");
        scanf ("%d", &sexo);
        } while (sexo <0 || sexo > 1);
        if (sexo == 0){
            cpm = cpm +1;
        } else {
            cpf = cpf+1;
        }
        do{
            printf ("ingrese el agno de nacimiento del paciente\n");
            scanf ("%d", &agno);
        } while (agno < 1920 || agno > 2023);

        anio = agno;
        if (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0){
            band = 0;
        }else {
            band = 1;
        }
        
        do{
            printf ("ingrese mes de nacimiento en numero\n");
            scanf ("%d", &mes);
        } while (mes<1 || mes>12);

        do{
            printf ("ingrese el dia de nacimiento valido\n");
            scanf ("%d", &dia);
            if (mes == 2 && (dia > 28 && dia < 31)) {
                band2 = 1;
            }
        } while ((dia < 1 || dia > 31) || (band == 1 && band2 == 1));

        if ((2023-agno) < 18){
            cmenor = cmenor + 1;
        } else {
            cmayor = cmayor +1;
        }

        if (sexo == 1 && (ci % 2 == 0 )){
            precioC = precioC - (precioC * 0.15);
        }

        if (sexo == 0 && (2023 - agno >60)){
            precioC = precioC - (precioC * 0.30) ;
        }

        printf ("el precio de esta consulta es %.2f\n", precioC);
    }
    printf ("la cantidad de pacientes masculinos es: %d\n", cpm);
    printf ("la cantidad de pacientes femeninos es: %d\n", cpf);
    printf ("la cantidad de personas mayor de edad son: %d\n", cmayor);
    printf ("la cantidad de personas menor de edad son: %d\n", cmenor);
    getch ();
    return 0;
}

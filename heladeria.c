    	//En una heladería se tienen 4 tipos de empleados ordenados con su número
	//identificador y salario diario correspondiente: 1 - cajero (25$/día), 2 - servidor 
	//(40$/día), 3 - preparador de mezclas (45$/día) y 4 - mantenimiento (30$/día).
	//El dueño de la tienda desea tener un programa donde solo ingrese dos números 
	//enteros que representen al número identificador del empleado y la cantidad de días 
	//que trabajó en la semana (6 días máximos), y el programa le mostrará por pantalla la 
	//cantidad en Bolívares y en Bolívares Fuertes que el dueño le debe pagar al empleado que ingresó

#include <stdio.h>

#define caj 25
#define ser 40
#define mez 45
#define man 30

int main()
{
    int emp, dia, pag, suma, rpt;
	do
	{
		do
		{
			printf ("Introduzca un identificador correcto entre el 1 y 4\n");
			scanf ("%d", &emp);
		} while (emp > 4 || emp < 1);
		do
		{
			printf ("Introduzca una cantidad de dias validos (maximo hasta 6 dias)\n");
			scanf ("%d", &dia);
		} while (dia < 1 || dia > 6);
		switch (emp)
		{
		case 1:
		
			pag = caj * dia;
			break;
		case 2:
			pag = ser * dia;
			break;
		case 3: 
			pag = mez * dia;
			break;
		case 4:
			pag = man * dia;
			break;

		default: printf ("error\n");
			break;
		}
		printf ("El pago del empleado es $%d\n", pag);
		do
		{
		printf ("Desea calcular otro empleado? 1=si, 0=no\n");
		scanf ("%d", &rpt);
		} while (rpt < 0 || rpt >1);
	} while (rpt == 1);
	printf ("fin del programa, por favor cierre");
	return 0;
}

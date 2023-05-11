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

#include <stdio.h>

void jueces (int *puntfinr, int *puntfina);







void jueces (int *puntfinr, int *puntfina){
    int i, j, ra, contr = 0, conta = 0, caidar,caidaa, puntosr, puntosa, totalpr = 0, totalpa = 0;
    for (i = 1; i < 4; i++){
        printf ("Puntuaciones Juez #%d\n", i);
        for (j = 1; j < 13; j++){
            do {
                printf ("Quien gana el round #%d?\nBoxeador rojo = 1\n Boxeador azul = 0", j);
                scanf ("%d", &ra);
            } while (ra != 0 || ra != 1);
            do {
                printf ("El Boxeador rojo cayo al suelo?\nSi=1\nNo=0");
                scanf ("%d", &caidar);
            } while (caidar != 1 || caidar != 0);
            do{
                printf ("El boxeador azul cayo al suelo?\nSi=1\nNo=0");
                scanf ("%d", &caidaa);
            } while (caidaa != 1 || caidaa != 0);
            if (ra == 1){
                contr ++;
                puntosr = 10;
                puntosa = 9;
            }else {
                conta ++;
                puntosr = 9;
                puntosa = 10;
            }
            if (caidar == 1){
                puntosr = puntosr - 2
            }
            if (caidaa == 1){
                puntosa = puntosa - 2
            }
            if (ra == 1){
                printf ("El boxeador rojo gana el round #%d\n", j);
            } else {
                printf ("El boxeador azul gana el round #%d\n", j);
            }
            printf ("*PUNTUACION DEL ROUND*\nRojo=%d\tAzul%d\n", puntosr, puntosa);
            totalpr = puntosr + totalpr;
            totalpa = puntosa + totalpa;
        }
        printf ("Puntuaciones totales del juez #%d\n", j);
        printf ("Puntos Rojo: %d", totalpr);
        printf ("Puntos Azul: %d", totalpa);
        
    }
}

#include <stdio.h>

void juez (int *puntfinr, int *puntfina, int i, int *roundr, int *rounda );

int main (){
    
    int ptsrojo, ptsazul, i,
}





void juez (int *puntfinr, int *puntfina, int i, int *roundr, int *rounda){
    
    int j, rg, contr = 0, conta = 0, caidar,caidaa, puntosr, puntosa;
        printf ("Puntuaciones Juez #%d\n", i);
        for (j = 1; j < 13; j++){
            do {
                printf ("Quien gana el round #%d?\nBoxeador rojo = 1\nBoxeador azul = 0\n", j);
                scanf ("%d", &rg);
            } while (rg < 0 || rg > 1);
            do {
                printf ("El Boxeador rojo cayo al suelo?\nSi=1\nNo=0\n");
                scanf ("%d", &caidar);
            } while (caidar > 1 || caidar < 0);
            do{
                printf ("El boxeador azul cayo al suelo?\nSi=1\nNo=0\n");
                scanf ("%d", &caidaa);
            } while (caidaa > 1 || caidaa < 0);
            if (rg == 1){
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
            if (rg == 1){
                printf ("El boxeador rojo gana el round #%d\n", j);
            } else {
                printf ("El boxeador azul gana el round #%d\n", j);
            }
            printf ("*PUNTUACION DEL ROUND*\nRojo=%d\tAzul%d\n", puntosr, puntosa);
            *puntfinr = puntosr + *puntfinr;
            *puntfina = puntosa + *puntfina;
        }
    printf ("Puntuaciones totales del juez #%d\n", i);
    printf ("Puntos Rojo: %d", *puntfinr);
    printf ("---Puntos Azul: %d\n", *puntfinr);
    printf ("El Boxeador rojo gana #%d rounds\n", contr);
    printf ("El Boxeador azul gana #%d rounds\n", conta);
    *roundr = contr;
    *rounda = conta;

}

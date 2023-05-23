#include <stdio.h>

void juez (int *puntfinr, int *puntfina, int i, int *roundr, int *rounda );
float ptstotrojos (int pts1,int pts2,int pts3, float *totr);
float ptstotazul (int pts1,int pts2,int pts3, float *tota);
void tipowin (int g1, int g2, int g3);


int main (){
    
    int ptsrojo1 =0, ptsazul1=0, ptsrojo2=0, ptsazul2=0, ptsrojo3=0, ptsazul3=0, rondr1=0, ronda1=0, rondr2=0, ronda2=0, rondr3=0, ronda3=0, i=1;
    int ganadorj1, ganadorj2, ganadorj3, cont =0;
    float puntos_totalesr = 0, puntos_totalesa =0, rounds_totalesr =0, rounds_totalesa=0;
    
    juez (&ptsrojo1, &ptsazul1, i, &rondr1, &ronda1);
    i++;
    juez (&ptsrojo2, &ptsazul2, i, &rondr2, &ronda2);
    i++;
    juez (&ptsrojo3, &ptsazul3, i, &rondr3, &ronda3);
    if (ptsrojo1 > ptsazul1){
        ganadorj1 = 1;
    }else if ( ptsrojo1 == ptsazul1){
         ganadorj1 = 2;
    }else {
        ganadorj1 = 0;
    }
    if (ptsrojo2 > ptsazul2){
        ganadorj2 = 1;
    }else if ( ptsrojo2 == ptsazul2){
         ganadorj2 = 2;
    }else {
        ganadorj2= 0;
    }
    if (ptsrojo3 > ptsazul3){
        ganadorj3 = 1;
    }else if ( ptsrojo3 == ptsazul3){
         ganadorj3 = 2;
    }else {
        ganadorj3 = 0;
    }
    tipowin (ganadorj1, ganadorj2, ganadorj3, &cont);
    if (cont == 1 )
    {
        
    }
    
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
                puntosr = puntosr - 2;
            }
            if (caidaa == 1){
                puntosa = puntosa - 2;
            }
            if (rg == 1){
                printf ("El boxeador rojo gana el round #%d\n", j);
            } else {
                printf ("El boxeador azul gana el round #%d\n", j);
            }
            printf ("*PUNTUACION DEL ROUND*\nRojo=%d\tAzul=%d\n", puntosr, puntosa);
            *puntfinr = puntosr + *puntfinr;
            *puntfina = puntosa + *puntfina;
        }
    printf ("Puntuaciones totales del juez #%d\n", i);
    printf ("Puntos Rojo: %d", *puntfinr);
    printf ("---Puntos Azul: %d\n", *puntfinr);
    printf ("***************\nEl Boxeador rojo gana %d rounds\n", contr);
    printf ("El Boxeador azul gana %d rounds\n", conta);
    printf ("El Boxeador rojo pierde %d rounds\n", 12-contr);
    printf ("El Boxeador azul pierde %d rounds\n***************\n", 12-conta);
    *roundr = contr;
    *rounda = conta;
}

int ptstotrojos (int pts1,int pts2,int pts3, float *totr){
    totr = pts1 + pts2 + pts3;
    totr = totr /3;
    return totr;
}

int ptstotazul (int pts1,int pts2,int pts3, float *tota){
    tota = pts1 + pts2 + pts3;
    tota = tota /3;
    return tota;
}
void tipowin (int g1, int g2, int g3, int *win){
    if (g1 == g2 && g2 == g3){
        *win = 1;
    }
    if ((g1 == g2 && g2 != g3) || (g1 != g2 && g2 == g3) || (g1 == g3 && g2 != g1)){
        *win = 2;
    }
    if ((g1 == g2 && g3 == 2)|| (g1 == g3 && g2 == 2) || (g1 == 2 && g2 == g3)){
        *win = 3;
    }
}

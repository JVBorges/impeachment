/*
  Jo�o Vitor Borges - 201625512
  Lucas Marquez Pontes - 201419431
  Vinicius de Freitas Correia - 201625202
*/

#include <stdio.h>

int main(){
    float x, y;
    int n, i, voto;
    char barra;

    //RECEBE O N�MERO DE VOTOS E A PROPOR��O PARA APROVA��O DE VOTOS
    //O CHAR BARRA N�O � CONSIDERADO
    scanf("%d %f%c%f",&n,&x,&barra,&y);
    float voto_final, prop; // Ciro: n�o inicializou voto_final

    //DIVIS�O QUE DEFINE A PROPOR��O PARA A APROVA��O ATRAV�Z DA RELA��O
    //ENTRE OS CANDIDATOS E A PROPOR��O DOS VOTOS
    prop =(x*n)/y;

    //LA�O QUE RECEBE OS VOTOS SEPARADOS POR ESPA�O
    for(i=0;i<n;i++){
        scanf("%d",&voto);
        if(voto == 1){
            voto_final++;
        }
    }

    //FAZ A APURA��O DOS VOTOS COMPARANDO-OS COM A PROPOR��O (prop)
    //E EXIBE OS RESULTADOS EM RELA��O COM A COMPARA��O DA VARI�VEL DO TOTAL DE VOTOS
    //COM A PROPOR��O NECESS�RIA
    if(voto_final >= prop){
        printf("sim\n");
    }else{
        printf("nao\n");
    }
    return 0;
}


/*----------------------
      C�DIGO FONTE
  ----------------------
  - Corretude...:  6.80
  - Legibilidade: 10.00
  - Nota........:  7.10
  ----------------------
      APRESENTA��O
  ----------------------
  - Jo�o Vitor..,: 10.00
  - Lucas Marques: 10.00
  - Vinicius.....: 10.00
  ----------------------
        NOTA
  ----------------------
  - Jo�o Vitor..,:  8.55
  - Lucas Marques:  8.55
  - Vinicius.....:  8.55
  ----------------------*/


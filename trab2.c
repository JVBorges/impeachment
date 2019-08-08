/*
  João Vitor Borges - 201625512
  Lucas Marquez Pontes - 201419431
  Vinicius de Freitas Correia - 201625202
*/

#include <stdio.h>

int main(){
    float x, y;
    int n, i, voto;
    char barra;

    //RECEBE O NÚMERO DE VOTOS E A PROPORÇÃO PARA APROVAÇÃO DE VOTOS
    //O CHAR BARRA NÃO É CONSIDERADO
    scanf("%d %f%c%f",&n,&x,&barra,&y);
    float voto_final, prop; // Ciro: não inicializou voto_final

    //DIVISÃO QUE DEFINE A PROPORÇÃO PARA A APROVAÇÃO ATRAVÉZ DA RELAÇÃO
    //ENTRE OS CANDIDATOS E A PROPORÇÃO DOS VOTOS
    prop =(x*n)/y;

    //LAÇO QUE RECEBE OS VOTOS SEPARADOS POR ESPAÇO
    for(i=0;i<n;i++){
        scanf("%d",&voto);
        if(voto == 1){
            voto_final++;
        }
    }

    //FAZ A APURAÇÃO DOS VOTOS COMPARANDO-OS COM A PROPORÇÃO (prop)
    //E EXIBE OS RESULTADOS EM RELAÇÃO COM A COMPARAÇÃO DA VARIÁVEL DO TOTAL DE VOTOS
    //COM A PROPORÇÃO NECESSÁRIA
    if(voto_final >= prop){
        printf("sim\n");
    }else{
        printf("nao\n");
    }
    return 0;
}


/*----------------------
      CÓDIGO FONTE
  ----------------------
  - Corretude...:  6.80
  - Legibilidade: 10.00
  - Nota........:  7.10
  ----------------------
      APRESENTAÇÃO
  ----------------------
  - João Vitor..,: 10.00
  - Lucas Marques: 10.00
  - Vinicius.....: 10.00
  ----------------------
        NOTA
  ----------------------
  - João Vitor..,:  8.55
  - Lucas Marques:  8.55
  - Vinicius.....:  8.55
  ----------------------*/


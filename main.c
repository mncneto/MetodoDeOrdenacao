#include <stdio.h>
#include <stdlib.h>

/*---------------------------------------------------------------*/
int * bubbleSort(int * vetor, int len){

    int i, j, aux, menor;
    for (i = 1; i < len; i++) {
        for (j = 0; j < len - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    return vetor;
}
/*---------------------------------------------------------------*/
void imprimeVetor (int *vetor, int len){
    int i;
    for (i=0;i<len;i++){
        printf("%d,", vetor[i]);
    }
}
/*---------------------------------------------------------------*/
int main (){
    int vetor[10]= {2,4,-1,50,-90,10,20,-9,-8,1000};
    int * vetor2;
    int len = sizeof(vetor) / sizeof(int);
    vetor2 = bubbleSort(vetor, len);
    imprimeVetor(vetor2,len );
    return 0;
}

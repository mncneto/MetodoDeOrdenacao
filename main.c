#include <stdio.h>
#include <stdlib.h>

/*---------------------------------------------------------------*/
int *bubbleSort(int *vetor, int len)
{

    int i, j, aux, menor;
    for (i = 1; i < len; i++)
    {
        for (j = 0; j < len - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    return vetor;
}
/*---------------------------------------------------------------*/
void imprimeVetor(int *vetor, int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d,", vetor[i]);
    }
    printf("\n");
}
/*---------------------------------------------------------------*/
int main()
{
    int vetor[10] = {2, 4, -1, 50, -90, 10, 20, -9, -8, 1000};
    int *vetor2;
    int entrada;
    int len = sizeof(vetor) / sizeof(int);
    char mensagem[1000];
    while (1==1)
    {
        sprintf(mensagem, "\nDigite qual metodo de ordenacao deseja usar\n");
        sprintf(mensagem, "%s1 - Bubble Sort\n", mensagem);
        sprintf(mensagem, "%s2 - Shell Sort\n", mensagem);
        sprintf(mensagem, "%s3 - Quick Sort\n", mensagem);
        sprintf(mensagem, "%s4 - Sair\n", mensagem);
        sprintf(mensagem, "%s>", mensagem);
        printf("%s", mensagem);
        scanf("%d", &entrada);
        switch (entrada)
        {
        case 1:
            vetor2 = bubbleSort(vetor, len);
            break;
        default:
            printf("\nValor invalido\n");
            return 0;
        }
        imprimeVetor(vetor2, len);
    }
    return 0;
}

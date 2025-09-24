#include <stdio.h>
int main()
{
    int i, maior, menor, vetor[15];

    printf("Digite um numero: ");
    scanf("%d", &vetor[0]);
    maior = menor = vetor[0];
    for (i = 1; i < 15; i++)
    {

        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    printf("O maior numero e: %d e o menor e: %d", maior, menor);
    return 0;
}

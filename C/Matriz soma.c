#include <stdio.h>
int main()
{
    int i, j, matriz[3][3], soma;
    soma = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento a%d%d da matriz: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    printf("A soma dos elementos da matriz e: %d\n", soma);
    return 0;
}
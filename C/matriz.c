#include <stdio.h>
int main()
{
    int m, n, i, j;
    printf("Digite o numero de linhas e colunas da matriz: ");
    scanf("%d %d", &m, &n);
    int matriz[m][n];
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("Digite o elemento da linha %d e coluna %d da matriz:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("A matriz digitada e:\n");
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
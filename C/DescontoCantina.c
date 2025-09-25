#include <stdio.h>
int main()
{
    int cat;
    float compra, valorpago;
    compra = 0;
    printf("Qual o valor da compra?");
    scanf("%f", &compra);
    printf("Qual a categoria do comprador?\n1-visitante\n2-servidor\n3-aluno\n");
    scanf("%d", &cat);
    switch (cat)
    {
    case 1:
        valorpago = compra;
        break;
    case 2:
        valorpago = 0.9 * compra;
        break;
    case 3:
        valorpago = 0.95 * compra;
        break;
    default:
        printf("Categoria invalida: ");
        break;
    }
    printf("O valor a pagar sera: R$ %.2f", valorpago);
    return 0;
}
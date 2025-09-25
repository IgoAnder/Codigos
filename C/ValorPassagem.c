#include <stdio.h>
int main()
{
    int destino, tipo;
    float valorpago;
    printf("Qual o destino pretendido?\n1-Morros\n2-Barreirinhas\n3-Bacabeira\n4-Rosario\n");
    scanf("%d", &destino);
    switch (destino)
    {
    case 1:
        valorpago = 120;
        break;
    case 2:
        valorpago = 200;
        break;
    case 3:
        valorpago = 50;
        break;
    case 4:
        valorpago = 80;
        break;
    }
    printf("Qual o tipo de viagem?\n1-Ida e volta\n2-So ida\n");
    scanf("%d", &tipo);
    if (tipo == 1)
    {
        valorpago = 0.9 * 2 * valorpago;
    }
    printf("O valor pago pela viagem e de R$ %.2f", valorpago);
    return 0;
}
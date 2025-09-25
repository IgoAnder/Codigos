#include <stdio.h>
int main()
{
    int dia;
    printf("Digite o dia da semana:\n1-Domingo\n2-Segunda-feira\n3-Terca-feira\n4-Quarta-feira\n5-Quinta-feira\n6-Sexta-feira\n7-Sabado: ");
    scanf("%d", &dia);
    switch (dia)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-feira");
        break;
    case 3:
        printf("Terca-feira");
        break;
    case 4:
        printf("Quarta-feira");
        break;
    case 5:
        printf("Quinta-feira");
        break;
    case 6:
        printf("Sexta-feira");
        break;
    case 7:
        printf("Sabado");
        break;
    default:
        printf("Dia invalido");
    }
    return 0;
}
/*25. Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo. Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que, pelo menos, o custo do espetáculo seja alcançado.*/

#include <stdio.h>

int main()
{
    float ingresso, custo, quantidade = 0;

    printf("Digite o valor do custo: ");
    scanf("%f", &custo);
    printf("Digite o valor do ingresso: ");
    scanf("%f", &ingresso);

    quantidade = custo / ingresso;

    printf("A Quantidade minima de ingressos vendidas deve ser de %.0f.\n", quantidade);

    return 0;
}
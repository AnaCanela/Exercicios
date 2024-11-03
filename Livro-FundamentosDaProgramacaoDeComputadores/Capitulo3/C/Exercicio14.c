/*14. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
    a) a idade dessa pessoa;
    b) quantos anos ela terá em 2050.*/

#include <stdio.h>

int main()
{
    int nascimento, anoAtual, idade = 0, futuro = 0;

    printf("Digite seu ano de nascimento: ");
        scanf("%d", &nascimento);
    printf("Digite o ano atual: ");
        scanf("%d", &anoAtual);

    idade = anoAtual - nascimento;
    futuro = 2050 - nascimento;

    printf("\nIdade: %d\n", idade);
    printf("Idade em 2050: %d", futuro);

    return 0;
}
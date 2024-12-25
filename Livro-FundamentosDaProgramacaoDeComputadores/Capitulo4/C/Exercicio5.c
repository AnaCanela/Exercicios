/*5. Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga essa regra. Mostre, em seguida, os quatro números em ordem decrescente. Suponha que o usuário digitará quatro números diferentes.*/

#include <stdio.h>

int main()
{
    float n1, n2, n3, n4;

    printf("Digite três números em ordem crescente: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite um número aleatório: ");
    scanf("%f", &n4);

    if(n4 < n1){
        printf("%.1f -> %.1f -> %.1f -> %.1f\n", n3, n2, n1, n4);
    } else if(n4 < n2){
        printf("%.1f -> %.1f -> %.1f -> %.1f\n", n3, n2, n4, n1);
    } else if(n4 < n3){
        printf("%.1f -> %.1f -> %.1f -> %.1f\n", n3, n4, n2, n1);
    } else if(n4 > n3){
        printf("%.1f -> %.1f -> %.1f -> %.1f\n", n4, n3, n2, n1);
    }

    return 0;
}
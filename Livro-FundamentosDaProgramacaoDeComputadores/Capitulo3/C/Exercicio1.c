//1. Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

#include <stdio.h>

int main()
{
    int a, b, c, d, Soma = 0;

    printf("Digite os valores de A, B, C e D: ");
        scanf("%d %d %d %d", &a, &b, &c, &d);
    
    Soma = a + b + c + d;

    printf("%d + %d + %d + %d = %d", a, b, c, d, Soma);

    return 0;
}
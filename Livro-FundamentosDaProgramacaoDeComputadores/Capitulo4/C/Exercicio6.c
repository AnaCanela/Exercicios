/*6. Faça um programa que receba um número inteiro e verifique se é par ou ímpar.*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Digite o número: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("\nO número é par!\n\n");
    } else {
        printf("\nO número é ímpar!\n\n");
    }

    return 0;
}
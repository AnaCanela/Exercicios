/*3. Faça um programa que receba dois números e mostre o maior.*/

#include <stdio.h>

int main()
{
    float numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);
    printf("Digite o segundo número: ");
    scanf("%f", &numero2);
    printf("\n");

    if(numero1 > numero2){
        printf("O %.1f é maior!\n", numero1);
    } else {
        printf("O %.1f é maior!\n", numero2);
    }

    if(numero1 == numero2){
        printf("Os números são iguais!\n");
    }

    return 0;
}
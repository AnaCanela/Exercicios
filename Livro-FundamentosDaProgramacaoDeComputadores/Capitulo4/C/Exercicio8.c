/*8. Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados neces-
sários para executar cada operação.
Menu de opções:
    1. Somar dois números.
    2. Raiz quadrada de um número.
    Digite a opção desejada:*/

#include <stdio.h>
#include <math.h>

int main()
{
    int uso;
    float soma = 0, raizQuad = 0, num1, num2;

    printf("Menu de opções:");
    printf("\n1. Somar dois números.");
    printf("\n2. Raiz quadrada de um número.");
    printf("\nDigite a opção: ");
    scanf("%d", &uso);

    if(uso == 1){
        printf("\nDigite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        soma = num1 + num2;

        printf("A soma dos números %.1f e %.1f é %.1f.", num1, num2, soma);
    }

    if(uso == 2){
        printf("\nDigite o número: ");
        scanf("%f", &num1);

        raizQuad = sqrt(num1);

        printf("A raiz quadrada de %.1f é %.1f.", num1, raizQuad);
    }

    if(uso != 1 && uso != 2){
        printf("\nOpção inválida.");
    }

    return 0;
}
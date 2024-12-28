//5. Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.

#include <stdio.h>

int main()
{
    float salario, percentual, aumento = 0, novoSalario = 0;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);

    percentual = percentual / 100;
    aumento = salario * percentual;
    novoSalario = salario + aumento;

    printf("Salario: R$ %.2f.", novoSalario);

    return 0;
}
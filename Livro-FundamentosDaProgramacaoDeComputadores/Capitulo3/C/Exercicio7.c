//7. Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.

#include <stdio.h>

int main()
{
    float salarioBase, gratificacao = 0, imposto = 0, salario = 0;

    printf("Digite o salario: ");
        scanf("%f", &salarioBase);
    
    gratificacao = 50;
    imposto = salarioBase * 10 / 100;
    salario = salarioBase + gratificacao - imposto;

    printf("Salario: R$ %.2f.", salario);

    return 0;
}
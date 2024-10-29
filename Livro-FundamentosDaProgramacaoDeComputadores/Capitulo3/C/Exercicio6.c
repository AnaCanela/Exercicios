//6. Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.

#include <stdio.h>

int main()
{
    float salarioBase, gratificação = 0, imposto = 0, salario = 0;

    printf("Digite o salario: ");
        scanf("%f", &salarioBase);
    
    gratificação = salarioBase * 5 / 100;
    imposto = salarioBase * 7 / 100;
    salario = salarioBase + gratificação - imposto;

    printf("Salario: R$ %.2f.", salario);

    return 0;
}
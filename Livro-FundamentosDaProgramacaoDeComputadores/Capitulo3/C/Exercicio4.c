//4. Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.

#include <stdio.h>

int main()
{
    float salario, novoSalario = 0, aumento = 0;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    aumento = salario * 25 / 100;
    novoSalario = salario + aumento;

    printf("Seu novo salario eh: R$ %.2f", novoSalario);
    
    return 0;
}
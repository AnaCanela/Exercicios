/*16. Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e mostre o salário a receber, seguindo estas regras:
    a) a hora trabalhada vale a metade do salário mínimo.
    b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
    c) o imposto equivale a 3% do salário bruto.
    d) o salário a receber equivale ao salário bruto menos o imposto.*/

#include <stdio.h>

int main()
{
    float hTrab, salMin, valorHTrab = 0, salBruto = 0, imposto = 0, salLiq = 0;

    printf("Digite as horas trabalhadas: ");
        scanf("%f", &hTrab);
    printf("Digite o salario minimo: ");
        scanf("%f", &salMin);
    
    valorHTrab = salMin / 2;
    salBruto = valorHTrab * hTrab;
    imposto = salBruto * 3 / 100;
    salLiq = salBruto - imposto;

    printf("O salario a receber eh: R$ %.2f", salLiq);

    return 0;
}
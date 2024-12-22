/*22. Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um programa que rece-
ba o valor do salário mínimo e a quantidade de quilowatts consumida por uma residência. Calcule e
mostre:
a) o valor de cada quilowatt;
b) o valor a ser pago por essa residência;
c) o valor a ser pago com desconto de 15%.*/

#include <stdio.h>

int main()
{
    float salario, quantiKW, valorKw = 0, valorReais = 0, desconto = 0, valorDesc = 0;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite a quantidade de quilowatts consumida: ");
    scanf("%f", &quantiKW);

    valorKw = salario / 5;
    valorReais = valorKw * quantiKW;
    desconto = valorReais * 15 / 100;
    valorDesc = valorReais - desconto;

    printf("Valor do quilowatt: R$ %.2f", valorKw);
    printf("Valor a ser pago: R$ %.2f", valorReais);
    printf("Valor com desconto: R$ %.2f", valorDesc);
    
    return 0;
}
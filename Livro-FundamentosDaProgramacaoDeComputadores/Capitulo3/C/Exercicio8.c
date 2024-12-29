//8. Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.

#include <stdio.h>

int main()
{
    float deposito, taxa, rendimento = 0, total = 0;

    printf("Digite o valor do deposito: ");
        scanf("%f", &deposito);
    
    printf("Digite a taxa de juros: ");
        scanf("%f", &taxa);

    taxa = taxa / 100;
    rendimento = deposito * taxa;
    total = deposito + rendimento;

    printf("Rendimento: R$ %.2f", rendimento);
    printf("\nValor total: %.2f", total); 

    return 0;
}
/*15. O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
    a) o valor correspondente ao lucro do distribuidor;
    b) o valor correspondente aos impostos;
    c) o preço final do veículo.*/

#include <stdio.h>

int main()
{
    float precoFab, percLuc, percImp, lucro = 0, imposto = 0, valorFinal = 0;

    printf("Digite o preco de fabrica co carro: ");
        scanf("%f", &precoFab);
    printf("Digite o percentual de lucro: ");
        scanf("%f", &percLuc);
    printf("Digite o percentual de impostos: ");
        scanf("%f", &percImp);
    
    lucro = precoFab * percLuc / 100;
    imposto = precoFab * percImp / 100;
    valorFinal = precoFab + lucro + imposto;

    printf("\nLucro: R$ %.2f\n", lucro);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;    
}
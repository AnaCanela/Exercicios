//9. Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2.

#include <stdio.h>

int main()
{
    float base, altura, area = 0;
    
    printf("Digite a base: ");
        scanf("%f", &base);
    
    printf("Digite a altura: ");
        scanf("%f", &altura);
    
    area = (base * altura) / 2;

    printf("Area do triangulo: %.1f", area);

    return 0;
}
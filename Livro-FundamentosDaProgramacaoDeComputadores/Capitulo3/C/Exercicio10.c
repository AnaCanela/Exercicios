//10. Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = PI * R².

#include <stdio.h>

int main()
{
    float raio, PI = 3.1415, area = 0;

    printf("Digite o valor do raio: ");
        scanf("%f", &raio);
    
    area = PI * raio * raio;

    printf("Area do circulo: %.1f", area);

    return 0;
}
/*21. Uma pessoa deseja pregar um quadro em uma parede. Faça um programa para calcular e mostrar a
que distância a escada deve estar da parede. A pessoa deve fornecer o tamanho da escada e a altura em
que deseja pregar o quadro.
Lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja alcançar.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z;

    printf("Digite o tamanho da escada: ");
    scanf("%f", &z);

    printf("Digite a altura: ");
    scanf("%f", &x);

    y = pow(z, 2) - pow(x, 2);
    y = sqrt(y);

    printf("A distância deve ser %.1f", y);

    return 0;
}
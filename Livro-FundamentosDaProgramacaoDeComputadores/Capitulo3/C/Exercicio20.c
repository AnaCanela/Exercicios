/*20. Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no
chão e encostada na parede e a altura da parede onde está a ponta da escada. Calcule e mostre a me-
dida dessa escada.
Observação: as funções trigonométricas implementadas nas linguagens de programação trabalham
com medidas de ângulos em radianos.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float angulo, altura, escada, radiano = 0;

    printf("Digite o angulo: ");
        scanf("%f", &angulo);
    printf("Digite a altura: ");
        scanf("%f", &altura);
    
    radiano = (angulo * 3.14) / 180;
    escada = altura /sin(radiano);

    printf("A medida da escada é %.1f", escada);

    return 0;
}
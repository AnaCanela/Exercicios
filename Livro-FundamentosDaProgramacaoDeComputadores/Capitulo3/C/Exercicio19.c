/*19. Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que
o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para
atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem
estar em metros.*/

#include <stdio.h>

int main()
{
    float usuario, degrau;
    int x;

    printf("Digite a altura do degrau: ");
        scanf("%f", &degrau);
    printf("Digite a altura do usuario: ");
        scanf("%f", &usuario);
    
    x = usuario / degrau;

    printf("Suba %d degraus", x);
    
    return 0;
}
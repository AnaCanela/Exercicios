//2. Faça um programa que receba três notas, calcule e mostre a média aritmética.

#include <stdio.h>

int main()
{
    float N1, N2, N3, Media = 0;

    printf("Digite os valore das tres notas: ");
        scanf("%f %f %f", &N1, &N2, &N3);
    
    Media = (N1 + N2 + N3) / 3;

    printf("\nA media das notas eh: %.1f", N1, N2, N3, Media);

    return 0;
}
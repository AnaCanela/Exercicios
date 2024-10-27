//3. Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

#include <stdio.h>

int main()
{
    float N1, N2, N3, mediaPonderada = 0; 
    int P1, P2, P3;

    printf("Digite os valore das tres notas: ");
        scanf("%f %f %f", &N1, &N2, &N3);
    
    printf("Digite seus pesos: ");
        scanf("%d %d %d", &P1, &P2, &P3);
    
    mediaPonderada = (N1 * P1 + N2 * P2 + N3 * P3) / (P1 + P2 + P3);

    printf("\nA media ponderada eh: %.1f", mediaPonderada);

    return 0;
}
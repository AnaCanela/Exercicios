/*18. Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a
quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a
mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para
cada gato, calcule e mostre quanto restará de ração no saco após cinco dias.*/

#include <stdio.h>

int main()
{
    float saco, gato1, gato2, somaGatos = 0, total = 0;

    printf("Digite a quantidade do saco de ração em quilos: ");
        scanf("%f", &saco);
    printf("Digite a quantidade para o primeiro gato: ");
        scanf("%f", &gato1);
    printf("Digite a quantidade para o segundo gato: ");
        scanf("%f", &gato2);
    
    gato1 = gato1 / 1000;
    gato2 = gato2 / 1000;
    somaGatos = gato1 + gato2;
    total = saco - (5 * somaGatos);

    printf("Restante do saco de reção: %.1f Kg", total);

    return 0;
}
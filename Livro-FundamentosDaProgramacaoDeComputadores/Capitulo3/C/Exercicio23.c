/*23. Faça um programa que receba um número real, encontre e mostre:
a) a parte inteira desse número;
b) a parte fracionária desse número;
c) o arredondamento desse número.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float numero, inteira = 0, fracionaria = 0, arredondada = 0;

    printf("Digite o numero: ");
    scanf("%f", &numero);

    inteira = floor(numero);
    fracionaria = numero - inteira;
    arredondada = round(numero);

    printf("Parte inteira: %f\n", inteira);
    printf("Parte fracionaria: %f\n", fracionaria);
    printf("Parte arredondada: %f\n", arredondada);

    return 0;
}
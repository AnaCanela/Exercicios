/*11. Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
    a) o numero digitado ao quadrado;
    b) o numero digitado ao cubo;
    c) a raiz quadrada do numero digitado;
    d) a raiz cúbica do numero digitado.*/


#include <stdio.h>
#include <math.h>

int main()
{
    float numero, quadrado = 0, cubo = 0, raizQuad = 0, raizCub = 0;

    printf("Digite um numero maior que zero: ");
        scanf("%f", &numero);
    
    quadrado = numero * numero;
    cubo = numero * numero * numero;
    raizQuad = sqrt(numero);
    raizCub = cbrt(numero);

    printf("Quadrado: %.1f\n", quadrado);
    printf("Cubo: %.1f\n", cubo);
    printf("Raiz Quadrada: %.1f\n", raizQuad);
    printf("Raiz cubica: %.1f\n", raizCub);

    return 0;
}
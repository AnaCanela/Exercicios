//12. Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, pot1 = 0, pot2 = 0;

    printf("Digite dois numeros a e b maiores que zero: ");
        scanf("%f %f", &a, &b);
    
    pot1 = pow(a, b);
    pot2 = pow(b, a);

    printf("a elevado a b: %.1f\n", pot1);
    printf("b elevado a a: %.1f", pot2);

    return 0;
}
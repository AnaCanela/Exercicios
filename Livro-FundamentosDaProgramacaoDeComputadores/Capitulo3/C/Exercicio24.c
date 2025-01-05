/*24. Faça um programa que receba uma hora formada por hora e minutos (um número real), calcule e mostre a hora digitada apenas em minutos. Lembre-se de que:
 - para quatro e meia, deve-se digitar 4.30;
 - os minutos vão de 0 a 59.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float hora, h = 0, m = 0, conversao = 0;

    printf("Digite a hora: "); 
    scanf("%f", &hora);

    h = floor(hora);
    m = hora - h;
    conversao = (h * 60) + (m * 100);

    printf("A hora convertida é igual a %.0f minutos.", conversao);

    return 0;
}
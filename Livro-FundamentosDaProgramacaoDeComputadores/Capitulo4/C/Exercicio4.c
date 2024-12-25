/*4. Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário digitará três números diferentes.*/

#include <stdio.h>

int main()
{
    float n1, n2, n3;

    printf("Digite os três números: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if(n1 < n2 && n2 < n3){
        printf("%.1f -> %.1f -> %.1f\n", n1, n2, n3);
    } else if(n1 < n3 && n3 < n2){
        printf("%.1f -> %.1f -> %.1f\n", n1, n3, n2);
    } else  if(n2 < n1 && n1 < n3){
        printf("%.1f -> %.1f -> %.1f\n", n2, n1, n3);
    } else if(n2 < n3 && n3 < n1){
        printf("%.1f -> %.1f -> %.1f\n", n2, n3, n1);
    } else if(n3 < n1 && n1 < n2){
        printf("%.1f -> %.1f -> %.1f\n", n3, n1, n2);
    } else if(n3 < n2 && n2 < n1){
        printf("%.1f -> %.1f -> %.1f\n", n3, n2, n1);
    }

    return 0;
}
/*7. Faça um programa que receba quatro valores: I, A, B e C. Desses valores, I é inteiro e positivo, A, B e C são reais. Escreva os números A, B e C obedecendo à tabela a seguir. Suponha que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números digitados sejam diferentes um do outro.*/

#include <stdio.h>

int main()
{
    int I;
    float A, B, C;

    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);
    printf("\nDigite o valor de I, válidos os números 1, 2 e 3: ");
    scanf("%d", &I);

    if(I == 1){
        if(A < B && B < C){
            printf("\nOrdem Crescente: %.1f - %.1f - %.1f\n", A, B, C);
        } else if(A < C && C < B){
            printf("\nOrdem Crescente: %.1f - %.1f - %.1f\n", A, C, B);
        } else if(B < A && A < C){
            printf("\nOrdem Crescente: %.1f - %.1f - %.1f\n", B, A, C);
        } else if(B < C && C < A){
            printf("\nOrdem Crescente: %.1f - %.1f - %.1f\n", B, C, A);
        } else if(C < A && A < B){
            printf("\nOrdem Crescente: %.1f - %.1f - %.1f\n", C, A, B);
        } else if(C < B && B < A){
            printf("\nOrdem Crescente: %.1f - %.1f - %.1f\n", C, B, A);
        }
    }

    if(I == 2){
        if(A > B && B > C){
            printf("\nOrdem Decrescente: %.1f - %.1f - %.1f\n", A, B, C);
        } else if(A > C && C > B){
            printf("\nOrdem Decrescente: %.1f - %.1f - %.1f\n", A, C, B);
        } else if(B > A && A > C){
            printf("\nOrdem Decrescente: %.1f - %.1f - %.1f\n", B, A, C);
        } else if(B > C && C > A){
            printf("\nOrdem Decrescente: %.1f - %.1f - %.1f\n", B, C, A);
        } else if(C > A && A > B){
            printf("\nOrdem Decrescente: %.1f - %.1f - %.1f\n", C, A, B);
        } else if(C > B && B > A){
            printf("\nOrdem Decrescente: %.1f - %.1f - %.1f\n", C, B, A);
        }
    }

    if(I == 3){
        if(A > B && A > C){
            printf("\nMaior numero no meio: %.1f - %.1f - %.1f\n", B, A, C);
        } else if(B > A && B > C){
            printf("\nMaior numero no meio: %.1f - %.1f - %.1f\n", A, B, C);
        } else if(C > A && C > B){
            printf("\nMaior numero no meio: %.1f - %.1f - %.1f\n", A, C, B);
        }
    }

    return 0;
}
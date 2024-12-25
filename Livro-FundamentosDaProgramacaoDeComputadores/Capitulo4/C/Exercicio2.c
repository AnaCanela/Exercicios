/*2. Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão tirar para serem aprovados, considerando que a média exigida é 6,0.*/


#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media = 0;

    printf("Digite as três notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if(media >= 0 && media < 3){
        printf("Reprovado.\n");
    } else if(media >= 3 && media < 7){
        printf("Exame.\n");
    } else if(media >= 7 && media <= 10){
        printf("Aprovado.\n");
    }

    return 0;
}
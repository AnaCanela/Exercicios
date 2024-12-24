/*1. nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um traba-
lho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas
obedece aos pesos a seguir:
            NOTA                PESO
    Trabalho de laboratório      2
    Avaliação semestral          3
    Exame final                  5
*/

#include <stdio.h>

int main()
{
    float notaTrab, notaAval, notaExame, mediaPonderada = 0;

    printf("Digite a nota do trabalho de laboratório: ");
    scanf("%f", &notaTrab);
    printf("Digite a nota da avaliação semestral: ");
    scanf("%f", &notaAval);
    printf("Digite a nota do exame final: ");
    scanf("%f", &notaExame);

    mediaPonderada = (notaTrab * 2 + notaAval * 3 + notaExame * 5) / (2 + 3 + 5);

    if(mediaPonderada >= 8 && mediaPonderada <= 10){
        printf("Nota A\n");
    } else if (mediaPonderada >= 7 && mediaPonderada < 8){
        printf("Nota B\n");
    } else if (mediaPonderada >= 6 && mediaPonderada < 7){
        printf("Nota C\n");
    } else if (mediaPonderada >= 5 && mediaPonderada < 6){
        printf("Nota D\n");
    } else if (mediaPonderada <= 5 && mediaPonderada == 0){
        printf("Nota E\n");
    }

    return 0;
}
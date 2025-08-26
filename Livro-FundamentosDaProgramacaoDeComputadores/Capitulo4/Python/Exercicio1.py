#1. A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um trabalho de laboratório,
# a uma avaliação semestral e a um exame final. A média das três notas mencionadas obedece aos pesos a seguir:
#            NOTA                PESO
#    Trabalho de laboratório      2
#    Avaliação semestral          3
#    Exame final                  5

notaLab = float(input("Digite a nota do trabalho: "))
notaAval = float(input("Digite a nota da avaliação: "))
notaExame = float(input("Digite a nota do exame final: "))

media = (notaLab * 2 + notaAval * 3 + notaExame * 5) / (2 + 3 + 5)

if media >= 8:
    print("A")
elif 7 <= media < 8:
    print("B")
elif 6 <= media < 7:
    print("C")
elif 5 <= media < 6:
    print("D")
elif media <= 5:
    print("E")
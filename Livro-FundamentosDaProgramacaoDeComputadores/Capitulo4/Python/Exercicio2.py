#2. Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem constante
# na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão tirar para serem aprovados,
# considerando que a média exigida é 6,0.

nota1, nota2, nota3 = map(float, input("Digite as três notas separadas por espaço: ").split())
media = (nota1 + nota2 + nota3) / 3
print("\nMédia:", media)

if 0 <= media < 3:
    print("\nReprovado")
elif 3 <= media < 7:
    print("Exame")
    notaExame = 12 - media
    print("Nota para aprovação:{:.1f}\n".format(notaExame))
elif media >= 7:
    print("Aprovado\n")
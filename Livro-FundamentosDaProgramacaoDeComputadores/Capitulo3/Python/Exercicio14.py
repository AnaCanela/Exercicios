#14. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
#    a) a idade dessa pessoa;
#    b) quantos anos ela terá em 2050.

nascimento = int(input("Digite seu ano de nascimento: "))
anoAtual = int(input("Digite o ano atual: "))

idade = anoAtual - nascimento
futuro = 2050 - nascimento

print("\nIdade: ", idade)
print("Idade em 2050: ", futuro)
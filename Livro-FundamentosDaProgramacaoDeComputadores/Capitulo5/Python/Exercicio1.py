#Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
#   a) Esse funcionário foi contratado em 2005, com salário inicial de R$ 1.000,00.
#   b) Em 2006, ele recebeu aumento de 1,5% sobre seu salário inicial.
#   c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao
#   dobro do percentual do ano anterior.
#Faça um programa que determine o salário atual desse funcionário.

ano = 2005
salario = 1000
aumento = 0.015

while ano < 2025:
    ano += 1
    salario += salario * aumento
    if ano > 2006:
        aumento *= 2

print(f"Salário em {ano}: R$ {salario:.2f}")
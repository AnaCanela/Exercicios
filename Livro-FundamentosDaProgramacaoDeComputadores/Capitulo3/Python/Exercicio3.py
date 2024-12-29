#3. Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

nota1 = float(input("Digite a primeira nota: "))
peso1 = int(input("Digite o peso da primeira nota: "))

nota2 = float(input("\nDigite a segunda nota: "))
peso2 = int(input("Digite o peso da segunda nota: "))

nota3 = float(input("\nDigite a terceira nota: "))
peso3 = int(input("Digite o peso da terceira nota: "))

mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3)

print("\nA media ponderada das notas é: ", mediaPonderada)
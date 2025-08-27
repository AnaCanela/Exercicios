#5. Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga essa regra.
# Mostre, em seguida, os quatro números em ordem decrescente. Suponha que o usuário digitará quatro números diferentes.*/

num1, num2, num3 = map(float,input("Digite três números em ordem crescente: ").split())
aleatorio = float(input("Digite um número fora da ordem anterior: "))

if aleatorio < num1:
    print("\n", num3, "-", num2, "-", num1, "-", aleatorio, "\n")
elif aleatorio < num2:
    print("\n", num3, "-", num2, "-", aleatorio, "-", num1, "\n")
elif aleatorio < num3:
    print("\n", num3, "-", aleatorio, "-", num2, "-", num1, "\n")
elif aleatorio > num3:
    print("\n", aleatorio, "-", num3, "-", num2, "-", num1, "\n")
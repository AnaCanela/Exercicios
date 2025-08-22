#23. Faça um programa que receba um número real, encontre e mostre:
#a) a parte inteira desse número;
#b) a parte fracionária desse número;
#c) o arredondamento desse número.

import math

num = float(input("Digite um número: "))

inteira = math.floor(num)
fracionaria = num - inteira
arredondado = round(num)

print("Inteira =", inteira)
print("Fracionaria =", fracionaria)
print("Arredondamento =", arredondado)